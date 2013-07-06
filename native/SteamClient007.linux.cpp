#include "SteamClient007.h"

#include <wine/debug.h>
WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

HSteamPipe Native007_CreateSteamPipe(ISteamClient007 *orig) {
    WINE_TRACE("\n");
    return orig->CreateSteamPipe();
};

bool Native007_BReleaseSteamPipe(ISteamClient007 *orig, HSteamPipe hSteamPipe) {
    WINE_TRACE("\n");
    return orig->BReleaseSteamPipe(hSteamPipe);
};

HSteamUser Native007_ConnectToGlobalUser(ISteamClient007 *orig, HSteamPipe hSteamPipe) {
    WINE_TRACE("\n");
    return orig->ConnectToGlobalUser(hSteamPipe);
};

HSteamUser Native007_CreateLocalUser(ISteamClient007 *orig, HSteamPipe *phSteamPipe) {
    WINE_TRACE("\n");
    return orig->CreateLocalUser(phSteamPipe);
};

void Native007_ReleaseUser(ISteamClient007 *orig, HSteamPipe hSteamPipe, HSteamUser hUser) {
    WINE_TRACE("\n");
    return orig->ReleaseUser(hUser, hSteamPipe);
};

ISteamUser *Native007_GetISteamUser(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamUser(hSteamUser, hSteamPipe, pchVersion);
};

ISteamGameServer *Native007_GetISteamGameServer(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamGameServer(hSteamUser, hSteamPipe, pchVersion);
};

void Native007_SetLocalIPBinding(ISteamClient007 *orig, uint32 unIP, uint16 usPort) {
    WINE_TRACE("\n");
    return orig->SetLocalIPBinding(unIP, usPort);
};

ISteamFriends *Native007_GetISteamFriends(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamFriends(hSteamUser, hSteamPipe, pchVersion);
};

ISteamUtils *Native007_GetISteamUtils(ISteamClient007 *orig, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamUtils(hSteamPipe, pchVersion);
};

ISteamMatchmaking *Native007_GetISteamMatchmaking(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamMatchmaking(hSteamUser, hSteamPipe, pchVersion);
};

ISteamMasterServerUpdater *Native007_GetISteamMasterServerUpdater(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamMasterServerUpdater(hSteamUser, hSteamPipe, pchVersion);
};

ISteamMatchmakingServers *Native007_GetISteamMatchmakingServers(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamMatchmakingServers(hSteamUser, hSteamPipe, pchVersion);
};

void *Native007_GetISteamGenericInterface(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamGenericInterface(hSteamUser, hSteamPipe, pchVersion);
};

ISteamUserStats *Native007_GetISteamUserStats(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamUserStats(hSteamUser, hSteamPipe, pchVersion);
};

ISteamApps *Native007_GetISteamApps(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamApps(hSteamUser, hSteamPipe, pchVersion);
};

ISteamNetworking *Native007_GetISteamNetworking(ISteamClient007 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamNetworking(hSteamUser, hSteamPipe, pchVersion);
};

ISteamRemoteStorage *Native007_GetISteamRemoteStorage(ISteamClient007 *orig, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamRemoteStorage(hSteamuser, hSteamPipe, pchVersion);
};

void Native007_RunFrame(ISteamClient007 *orig) {
    WINE_TRACE("\n");
    return orig->RunFrame();
};

uint32 Native007_GetIPCCallCount(ISteamClient007 *orig) {
    WINE_TRACE("\n");
    return orig->GetIPCCallCount();
};

void Native007_SetWarningMessageHook(ISteamClient007 *orig, SteamAPIWarningMessageHook_t pFunction) {
    WINE_TRACE("\n");
    orig->SetWarningMessageHook(pFunction);
};
