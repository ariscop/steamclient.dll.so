#include <open-steamworks/ISteamClient007.h>

extern "C" {
    extern HSteamPipe Native007_CreateSteamPipe(ISteamClient007 *orig);
    extern bool Native007_BReleaseSteamPipe(ISteamClient007 *orig, HSteamPipe hSteamPipe);
    extern HSteamUser Native007_ConnectToGlobalUser(ISteamClient007 *orig, HSteamPipe hSteamPipe);
    extern HSteamUser Native007_CreateLocalUser(ISteamClient007 *orig, HSteamPipe *phSteamPipe);
    extern void Native007_ReleaseUser(ISteamClient007 *orig, HSteamPipe hSteamPipe, HSteamUser hUser);
    extern ISteamUser *Native007_GetISteamUser(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamGameServer *Native007_GetISteamGameServer(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern void Native007_SetLocalIPBinding(ISteamClient007 *orig, uint32 unIP, uint16 usPort);
    extern ISteamFriends *Native007_GetISteamFriends(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamUtils *Native007_GetISteamUtils(ISteamClient007 *orig, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamMatchmaking *Native007_GetISteamMatchmaking(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamContentServer *Native007_GetISteamContentServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamMasterServerUpdater *Native007_GetISteamMasterServerUpdater(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamMatchmakingServers *Native007_GetISteamMatchmakingServers(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern void *Native007_GetISteamGenericInterface(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamUserStats *Native007_GetISteamUserStats(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamApps *Native007_GetISteamApps(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamNetworking *Native007_GetISteamNetworking(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamRemoteStorage *Native007_GetISteamRemoteStorage(ISteamClient007 *orig, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern void Native007_RunFrame(ISteamClient007 *orig);
    extern uint32 Native007_GetIPCCallCount(ISteamClient007 *orig);
    extern void Native007_SetWarningMessageHook(ISteamClient007 *orig, SteamAPIWarningMessageHook_t pFunction);
    
    extern void *Native007_wrapInterface(ISteamClient007 *iface);
}
