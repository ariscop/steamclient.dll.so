#include <open-steamworks/ISteamClient008.h>

extern "C" {
    extern HSteamPipe Native008_CreateSteamPipe(ISteamClient008 *orig);
    extern bool Native008_BReleaseSteamPipe(ISteamClient008 *orig, HSteamPipe hSteamPipe);
    extern HSteamUser Native008_ConnectToGlobalUser(ISteamClient008 *orig, HSteamPipe hSteamPipe);
    extern HSteamUser Native008_CreateLocalUser(ISteamClient008 *orig, HSteamPipe *phSteamPipe, EAccountType eAccountType);
    extern void Native008_ReleaseUser(ISteamClient008 *orig, HSteamPipe hSteamPipe, HSteamUser hUser);
    extern ISteamUser *Native008_GetISteamUser(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamGameServer *Native008_GetISteamGameServer(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern void Native008_SetLocalIPBinding(ISteamClient008 *orig, uint32 unIP, uint16 usPort);
    extern ISteamFriends *Native008_GetISteamFriends(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamUtils *Native008_GetISteamUtils(ISteamClient008 *orig, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamMatchmaking *Native008_GetISteamMatchmaking(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamMasterServerUpdater *Native008_GetISteamMasterServerUpdater(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamMatchmakingServers *Native008_GetISteamMatchmakingServers(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern void *Native008_GetISteamGenericInterface(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamUserStats *Native008_GetISteamUserStats(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamApps *Native008_GetISteamApps(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamNetworking *Native008_GetISteamNetworking(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamRemoteStorage *Native008_GetISteamRemoteStorage(ISteamClient008 *orig, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern void Native008_RunFrame(ISteamClient008 *orig);
    extern uint32 Native008_GetIPCCallCount(ISteamClient008 *orig);
    extern void Native008_SetWarningMessageHook(ISteamClient008 *orig, SteamAPIWarningMessageHook_t pFunction);
    
    extern void *Native008_wrapInterface(ISteamClient008 *iface);
    extern void Native008_delete(ISteamClient008 *iface);
}
