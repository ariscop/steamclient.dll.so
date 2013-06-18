#include <windef.h>
#include <windows.h>

#include <stdio.h>
#include <string.h>

//"Local\\SteamStart_SharedMemLock"
//"Local\\SteamStart_SharedMemFile"

int main(int argc, char *argv[]) {
	DWORD pid = GetCurrentProcessId();

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
/*        "C:\\Windows\\System32\\steamclient.dll",
        strlen("C:\\Windows\\System32\\steamclient.dll")*/
    );
    if(ret != ERROR_SUCCESS) goto error;
    
//    ret = RegSetValueEx(
//        ActiveProcess,
//        "Universe", 0,
//        REG_SZ, "Public", strlen("Public")
//    );
//    if(ret != ERROR_SUCCESS) goto error;
    
    ret = RegSetValueEx(
        ActiveProcess,
        "pid", 0,
        REG_DWORD, &pid, sizeof(pid)
    );
    if(ret != ERROR_SUCCESS) goto error;
    
    RegCloseKey(ActiveProcess);
    
//    CreateMutexEx(
//        NULL,
//        "Local\\SteamStart_SharedMemLock",
//        0, 0
//    );
    
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
