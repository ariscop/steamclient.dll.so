#include "SteamClient008.h"

static ISteamClient008 *orig;

class LoggedSteamClient008 : public ISteamClient008
{
public:
	virtual HSteamPipe CreateSteamPipe() {
		return Native008_CreateSteamPipe(orig);
	};

	virtual bool BReleaseSteamPipe( HSteamPipe hSteamPipe ) {
		return Native008_BReleaseSteamPipe(orig, hSteamPipe);
	};

	virtual HSteamUser ConnectToGlobalUser( HSteamPipe hSteamPipe ) {
		return Native008_ConnectToGlobalUser(orig, hSteamPipe);
	};

	virtual HSteamUser CreateLocalUser( HSteamPipe *phSteamPipe, EAccountType eAccountType ) {
		return Native008_CreateLocalUser(orig, phSteamPipe, eAccountType);
	};

	virtual void ReleaseUser( HSteamPipe hSteamPipe, HSteamUser hUser ) {
		return Native008_ReleaseUser(orig, hUser, hSteamPipe);
	};

	virtual ISteamUser *GetISteamUser( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native008_GetISteamUser(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual ISteamGameServer *GetISteamGameServer( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native008_GetISteamGameServer(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual void SetLocalIPBinding( uint32 unIP, uint16 usPort ) {
		return Native008_SetLocalIPBinding(orig, unIP, usPort);
	};
 
	virtual ISteamFriends *GetISteamFriends( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native008_GetISteamFriends(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual ISteamUtils *GetISteamUtils( HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native008_GetISteamUtils(orig, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual ISteamMatchmaking *GetISteamMatchmaking( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native008_GetISteamMatchmaking(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual ISteamMasterServerUpdater *GetISteamMasterServerUpdater( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native008_GetISteamMasterServerUpdater(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual ISteamMatchmakingServers *GetISteamMatchmakingServers( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native008_GetISteamMatchmakingServers(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual void *GetISteamGenericInterface( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native008_GetISteamGenericInterface(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual ISteamUserStats *GetISteamUserStats( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native008_GetISteamUserStats(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual ISteamApps *GetISteamApps( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native008_GetISteamApps(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual ISteamNetworking *GetISteamNetworking( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native008_GetISteamNetworking(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual ISteamRemoteStorage *GetISteamRemoteStorage( HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native008_GetISteamRemoteStorage(orig, hSteamuser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual void RunFrame() {
		return Native008_RunFrame(orig);
	};

	virtual uint32 GetIPCCallCount() {
		return Native008_GetIPCCallCount(orig);
	};

	virtual void SetWarningMessageHook( SteamAPIWarningMessageHook_t pFunction ) {
		Native008_SetWarningMessageHook(orig, pFunction);
	};

};

static LoggedSteamClient008 client;

void *Native008_wrapInterface(ISteamClient008 *iface) {
    orig = iface;
    return &client;
};

