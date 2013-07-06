#include "SteamClient008.h"

#include <wine/debug.h>
WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

HSteamPipe Native008_CreateSteamPipe(ISteamClient008 *orig) {
    WINE_TRACE("\n");
    return orig->CreateSteamPipe();
};

bool Native008_BReleaseSteamPipe(ISteamClient008 *orig, HSteamPipe hSteamPipe) {
    WINE_TRACE("\n");
    return orig->BReleaseSteamPipe(hSteamPipe);
};

HSteamUser Native008_ConnectToGlobalUser(ISteamClient008 *orig, HSteamPipe hSteamPipe) {
    WINE_TRACE("\n");
    return orig->ConnectToGlobalUser(hSteamPipe);
};

HSteamUser Native008_CreateLocalUser(ISteamClient008 *orig, HSteamPipe *phSteamPipe, EAccountType eAccountType) {
    WINE_TRACE("\n");
    return orig->CreateLocalUser(phSteamPipe, eAccountType);
};

void Native008_ReleaseUser(ISteamClient008 *orig, HSteamPipe hSteamPipe, HSteamUser hUser) {
    WINE_TRACE("\n");
    return orig->ReleaseUser(hUser, hSteamPipe);
};

ISteamUser *Native008_GetISteamUser(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamUser(hSteamUser, hSteamPipe, pchVersion);
};

ISteamGameServer *Native008_GetISteamGameServer(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamGameServer(hSteamUser, hSteamPipe, pchVersion);
};

void Native008_SetLocalIPBinding(ISteamClient008 *orig, uint32 unIP, uint16 usPort) {
    WINE_TRACE("\n");
    return orig->SetLocalIPBinding(unIP, usPort);
};

ISteamFriends *Native008_GetISteamFriends(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamFriends(hSteamUser, hSteamPipe, pchVersion);
};

ISteamUtils *Native008_GetISteamUtils(ISteamClient008 *orig, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamUtils(hSteamPipe, pchVersion);
};

ISteamMatchmaking *Native008_GetISteamMatchmaking(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamMatchmaking(hSteamUser, hSteamPipe, pchVersion);
};

ISteamMasterServerUpdater *Native008_GetISteamMasterServerUpdater(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamMasterServerUpdater(hSteamUser, hSteamPipe, pchVersion);
};

ISteamMatchmakingServers *Native008_GetISteamMatchmakingServers(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamMatchmakingServers(hSteamUser, hSteamPipe, pchVersion);
};

void *Native008_GetISteamGenericInterface(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamGenericInterface(hSteamUser, hSteamPipe, pchVersion);
};

ISteamUserStats *Native008_GetISteamUserStats(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamUserStats(hSteamUser, hSteamPipe, pchVersion);
};

ISteamApps *Native008_GetISteamApps(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamApps(hSteamUser, hSteamPipe, pchVersion);
};

ISteamNetworking *Native008_GetISteamNetworking(ISteamClient008 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamNetworking(hSteamUser, hSteamPipe, pchVersion);
};

ISteamRemoteStorage *Native008_GetISteamRemoteStorage(ISteamClient008 *orig, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamRemoteStorage(hSteamuser, hSteamPipe, pchVersion);
};

void Native008_RunFrame(ISteamClient008 *orig) {
    WINE_TRACE("\n");
    return orig->RunFrame();
};

uint32 Native008_GetIPCCallCount(ISteamClient008 *orig) {
    WINE_TRACE("\n");
    return orig->GetIPCCallCount();
};

void Native008_SetWarningMessageHook(ISteamClient008 *orig, SteamAPIWarningMessageHook_t pFunction) {
    WINE_TRACE("\n");
    orig->SetWarningMessageHook(pFunction);
};
