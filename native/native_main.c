/**
 * Wine-Steam Proxy dll
 **/

#include <windef.h>
#include "loader.h"

#include <wine/debug.h>
WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

BOOL WINAPI DllMain(
    HINSTANCE instance,
    DWORD reason,
    LPVOID reserved
)
{
    WINE_TRACE(" ( %p %d )\n", instance, reason);
    if(reason == DLL_PROCESS_ATTACH) {
        int ret = Steamclient_load();

        if(ret) {
            WINE_TRACE("Loaded steamclient.so\n");
            return TRUE;
        } else {
            WINE_ERR("Failed to load steamclient.so\n");
            return FALSE;
        }
    }
    if(reason == DLL_PROCESS_DETACH) {
        Steamclient_unload();
        WINE_TRACE("Unloaded steamclient.so\n");
    }
}
