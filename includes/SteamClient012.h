#include <open-steamworks/ISteamClient012.h>

extern "C" {
    extern HSteamPipe Native012_CreateSteamPipe(ISteamClient012 *orig);
    extern bool Native012_BReleaseSteamPipe(ISteamClient012 *orig, HSteamPipe hSteamPipe);
    extern HSteamUser Native012_ConnectToGlobalUser(ISteamClient012 *orig, HSteamPipe hSteamPipe);
    extern HSteamUser Native012_CreateLocalUser(ISteamClient012 *orig, HSteamPipe *phSteamPipe, EAccountType eAccountType);
    extern void Native012_ReleaseUser(ISteamClient012 *orig, HSteamPipe hSteamPipe, HSteamUser hUser);
    extern ISteamUser *Native012_GetISteamUser(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamGameServer *Native012_GetISteamGameServer(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern void Native012_SetLocalIPBinding(ISteamClient012 *orig, uint32 unIP, uint16 usPort);
    extern ISteamFriends *Native012_GetISteamFriends(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamUtils *Native012_GetISteamUtils(ISteamClient012 *orig, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamMatchmaking *Native012_GetISteamMatchmaking(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamMatchmakingServers *Native012_GetISteamMatchmakingServers(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern void *Native012_GetISteamGenericInterface(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamUserStats *Native012_GetISteamUserStats(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamGameServerStats *Native012_GetISteamGameServerStats(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamApps *Native012_GetISteamApps(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamNetworking *Native012_GetISteamNetworking(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamRemoteStorage *Native012_GetISteamRemoteStorage(ISteamClient012 *orig, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamScreenshots *Native012_GetISteamScreenshots(ISteamClient012 *orig, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern void Native012_RunFrame(ISteamClient012 *orig);
    extern uint32 Native012_GetIPCCallCount(ISteamClient012 *orig);
    extern void Native012_SetWarningMessageHook(ISteamClient012 *orig, SteamAPIWarningMessageHook_t pFunction);
    extern bool Native012_BShutdownIfAllPipesClosed(ISteamClient012 *orig);
    extern ISteamHTTP* Native012_GetISteamHTTP(ISteamClient012 *orig, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);
    extern ISteamUnifiedMessages* Native012_GetISteamUnifiedMessages(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
    
    extern void *Native012_wrapInterface(ISteamClient012 *iface);
}
