#include "SteamClient012.h"

#include <wine/debug.h>
WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

void Native012_delete(ISteamClient012 *orig) {
	WINE_TRACE("\n");
	delete orig;
}

HSteamPipe Native012_CreateSteamPipe(ISteamClient012 *orig) {
    WINE_TRACE("()\n");
    HSteamPipe ret = orig->CreateSteamPipe();
    WINE_TRACE("returned %d\n", ret);
    return ret;
};

bool Native012_BReleaseSteamPipe(ISteamClient012 *orig, HSteamPipe hSteamPipe) {
    WINE_TRACE("\n");
    return orig->BReleaseSteamPipe(hSteamPipe);
};

HSteamUser Native012_ConnectToGlobalUser(ISteamClient012 *orig, HSteamPipe hSteamPipe) {
    WINE_TRACE("( %d )\n", hSteamPipe);
    HSteamUser ret = orig->ConnectToGlobalUser(hSteamPipe);
    WINE_TRACE("returned %d\n", ret);
    return ret;
};

HSteamUser Native012_CreateLocalUser(ISteamClient012 *orig, HSteamPipe *phSteamPipe, EAccountType eAccountType) {
    WINE_TRACE("\n");
    return orig->CreateLocalUser(phSteamPipe, eAccountType);
};

void Native012_ReleaseUser(ISteamClient012 *orig, HSteamPipe hSteamPipe, HSteamUser hUser) {
    WINE_TRACE("\n");
    return orig->ReleaseUser(hUser, hSteamPipe);
};

ISteamUser *Native012_GetISteamUser(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("( %d  %d \"%s\" )\n", hSteamUser, hSteamPipe, pchVersion);
    return orig->GetISteamUser(hSteamUser, hSteamPipe, pchVersion);
};

ISteamGameServer *Native012_GetISteamGameServer(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamGameServer(hSteamUser, hSteamPipe, pchVersion);
};

void Native012_SetLocalIPBinding(ISteamClient012 *orig, uint32 unIP, uint16 usPort) {
    WINE_TRACE("\n");
    return orig->SetLocalIPBinding(unIP, usPort);
};

ISteamFriends *Native012_GetISteamFriends(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamFriends(hSteamUser, hSteamPipe, pchVersion);
};

ISteamUtils *Native012_GetISteamUtils(ISteamClient012 *orig, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("( %d \"%s\" )\n", hSteamPipe, pchVersion);
    return orig->GetISteamUtils(hSteamPipe, pchVersion);
};

ISteamMatchmaking *Native012_GetISteamMatchmaking(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamMatchmaking(hSteamUser, hSteamPipe, pchVersion);
};

ISteamMatchmakingServers *Native012_GetISteamMatchmakingServers(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamMatchmakingServers(hSteamUser, hSteamPipe, pchVersion);
};

void *Native012_GetISteamGenericInterface(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("( %d  %d \"%s\" )\n", hSteamUser, hSteamPipe, pchVersion);
    return orig->GetISteamGenericInterface(hSteamUser, hSteamPipe, pchVersion);
};

ISteamUserStats *Native012_GetISteamUserStats(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamUserStats(hSteamUser, hSteamPipe, pchVersion);
};

ISteamGameServerStats *Native012_GetISteamGameServerStats(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamGameServerStats(hSteamUser, hSteamPipe, pchVersion);
};

ISteamApps *Native012_GetISteamApps(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamApps(hSteamUser, hSteamPipe, pchVersion);
};

ISteamNetworking *Native012_GetISteamNetworking(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamNetworking(hSteamUser, hSteamPipe, pchVersion);
};

ISteamRemoteStorage *Native012_GetISteamRemoteStorage(ISteamClient012 *orig, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamRemoteStorage(hSteamuser, hSteamPipe, pchVersion);
};

ISteamScreenshots *Native012_GetISteamScreenshots(ISteamClient012 *orig, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamScreenshots(hSteamuser, hSteamPipe, pchVersion);
};

void Native012_RunFrame(ISteamClient012 *orig) {
    WINE_TRACE("\n");
    return orig->RunFrame();
};

uint32 Native012_GetIPCCallCount(ISteamClient012 *orig) {
    WINE_TRACE("\n");
    return orig->GetIPCCallCount();
};

void Native012_SetWarningMessageHook(ISteamClient012 *orig, SteamAPIWarningMessageHook_t pFunction) {
    WINE_TRACE("\n");
    orig->SetWarningMessageHook(pFunction);
};

bool Native012_BShutdownIfAllPipesClosed(ISteamClient012 *orig) {
    WINE_TRACE("\n");
    return orig->BShutdownIfAllPipesClosed();
};

ISteamHTTP* Native012_GetISteamHTTP(ISteamClient012 *orig, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamHTTP(hSteamuser, hSteamPipe, pchVersion);
};

ISteamUnifiedMessages* Native012_GetISteamUnifiedMessages(ISteamClient012 *orig, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    WINE_TRACE("\n");
    return orig->GetISteamUnifiedMessages(hSteamUser, hSteamPipe, pchVersion);
};
