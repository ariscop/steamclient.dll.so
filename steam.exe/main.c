#include <windef.h>
#include <windows.h>

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	DWORD pid = GetCurrentProcessId();
    HANDLE handle;
    HKEY ActiveProcess;
    
    long ret;
    ret = RegCreateKeyEx(
        HKEY_CURRENT_USER,
        "Software\\Valve\\Steam\\ActiveProcess",
        0,
        NULL,
        REG_OPTION_NON_VOLATILE,
        KEY_ALL_ACCESS,
        NULL,
        &ActiveProcess,
        NULL
    );
    if(ret != ERROR_SUCCESS) goto error_create;
    
    ret = RegSetValueEx(
        ActiveProcess,
        "SteamClientDll", 0,
        REG_SZ,
        "C:\\Program Files\\Steam\\steamclient.dll",
        strlen("C:\\Program Files\\Steam\\steamclient.dll")
    );
    if(ret != ERROR_SUCCESS) goto error;
    
    ret = RegSetValueEx(
        ActiveProcess,
        "pid", 0,
        REG_DWORD, (BYTE*)&pid, sizeof(pid)
    );
    if(ret != ERROR_SUCCESS) goto error;
    
    RegCloseKey(ActiveProcess);
    
    handle = CreateEventA(
        NULL,
        TRUE,
        FALSE,
        "Local\\SteamStart_SharedMemLock"
    );
    if(handle == NULL)
        printf("Warning: failed to create SteamStart_SharedMemLock");
    handle = CreateFileMappingA(
        INVALID_HANDLE_VALUE,
        NULL,
        PAGE_READWRITE, 0,
        0x1000, //4KB
        "Local\\SteamStart_SharedMemFile"
    );
    if(handle == NULL)
        printf("Warning: failed to create SteamStart_SharedMemFile");
    
    printf("Started steam imitator, pid %d\n", pid);
    fflush(stdout);
    
	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
    
error_create:
    printf("Error creating registry key: %d\n", ret);
    exit(1);
error:
    printf("Error setting registry key: %d\n", ret);
    exit(1);
}
