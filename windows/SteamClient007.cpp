#include "SteamClient007.h"

static ISteamClient007 *orig;

class LoggedSteamClient007 : public ISteamClient007
{
public:
	virtual HSteamPipe CreateSteamPipe() {
		return Native007_CreateSteamPipe(orig);
	};

	virtual bool BReleaseSteamPipe( HSteamPipe hSteamPipe ) {
		return Native007_BReleaseSteamPipe(orig, hSteamPipe);
	};

	virtual HSteamUser ConnectToGlobalUser( HSteamPipe hSteamPipe ) {
		return Native007_ConnectToGlobalUser(orig, hSteamPipe);
	};

	virtual HSteamUser CreateLocalUser( HSteamPipe *phSteamPipe ) {
		return Native007_CreateLocalUser(orig, phSteamPipe);
	};

	virtual void ReleaseUser( HSteamPipe hSteamPipe, HSteamUser hUser ) {
		return Native007_ReleaseUser(orig, hUser, hSteamPipe);
	};

	virtual ISteamUser *GetISteamUser( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native007_GetISteamUser(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual ISteamGameServer *GetISteamGameServer( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native007_GetISteamGameServer(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual void SetLocalIPBinding( uint32 unIP, uint16 usPort ) {
		return Native007_SetLocalIPBinding(orig, unIP, usPort);
	};
 
	virtual ISteamFriends *GetISteamFriends( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native007_GetISteamFriends(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual ISteamUtils *GetISteamUtils( HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native007_GetISteamUtils(orig, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual ISteamMatchmaking *GetISteamMatchmaking( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native007_GetISteamMatchmaking(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};
    
    virtual ISteamContentServer *GetISteamContentServer( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
        //return Native007_GetISteamContentServer(orig, hSteamUser, hSteamPipe, pchVersion);
        return NULL;
    }

	virtual ISteamMasterServerUpdater *GetISteamMasterServerUpdater( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native007_GetISteamMasterServerUpdater(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual ISteamMatchmakingServers *GetISteamMatchmakingServers( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native007_GetISteamMatchmakingServers(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual void *GetISteamGenericInterface( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native007_GetISteamGenericInterface(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual ISteamUserStats *GetISteamUserStats( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native007_GetISteamUserStats(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual ISteamApps *GetISteamApps( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native007_GetISteamApps(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual ISteamNetworking *GetISteamNetworking( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native007_GetISteamNetworking(orig, hSteamUser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual ISteamRemoteStorage *GetISteamRemoteStorage( HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		//return Native007_GetISteamRemoteStorage(orig, hSteamuser, hSteamPipe, pchVersion);
		return NULL;
	};

	virtual void RunFrame() {
		return Native007_RunFrame(orig);
	};

	virtual uint32 GetIPCCallCount() {
		return Native007_GetIPCCallCount(orig);
	};

	virtual void SetWarningMessageHook( SteamAPIWarningMessageHook_t pFunction ) {
		Native007_SetWarningMessageHook(orig, pFunction);
	};

};

static LoggedSteamClient007 client;

void *Native007_wrapInterface(ISteamClient007 *iface) {
    orig = iface;
    return &client;
};

