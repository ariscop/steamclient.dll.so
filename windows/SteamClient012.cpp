#include "SteamClient012.h"

#include "SteamAppTicket001.h"
#include "SteamUtils005.h"
#include "SteamUser016.h"

class LoggedSteamClient012 : public ISteamClient012
{
public:
	virtual HSteamPipe CreateSteamPipe() {
		return Native012_CreateSteamPipe(orig);
	};

	virtual bool BReleaseSteamPipe( HSteamPipe hSteamPipe ) {
		return Native012_BReleaseSteamPipe(orig, hSteamPipe);
	};

	virtual HSteamUser ConnectToGlobalUser( HSteamPipe hSteamPipe ) {
		return Native012_ConnectToGlobalUser(orig, hSteamPipe);
	};

	virtual HSteamUser CreateLocalUser( HSteamPipe *phSteamPipe, EAccountType eAccountType ) {
		return Native012_CreateLocalUser(orig, phSteamPipe, eAccountType);
	};

	virtual void ReleaseUser( HSteamPipe hSteamPipe, HSteamUser hUser ) {
		return Native012_ReleaseUser(orig, hUser, hSteamPipe);
	};

	virtual ISteamUser *GetISteamUser( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
        if(strcmp("SteamUser016", pchVersion) == 0) {
            void *ret = Native012_GetISteamUser(orig, hSteamUser, hSteamPipe, pchVersion);
            return NativeUser016_wrapInterface(ret);
        }
		return NULL;
	};

	virtual ISteamGameServer *GetISteamGameServer( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		return Native012_GetISteamGameServer(orig, hSteamUser, hSteamPipe, pchVersion);
	};

	virtual void SetLocalIPBinding( uint32 unIP, uint16 usPort ) {
		return Native012_SetLocalIPBinding(orig, unIP, usPort);
	};
 
	virtual ISteamFriends *GetISteamFriends( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		return Native012_GetISteamFriends(orig, hSteamUser, hSteamPipe, pchVersion);
	};

	virtual ISteamUtils *GetISteamUtils( HSteamPipe hSteamPipe, const char *pchVersion ) {
        if(strcmp("SteamUtils005", pchVersion) == 0) {
            ISteamUtils005 *iface = (ISteamUtils005*)Native012_GetISteamUtils(orig, hSteamPipe, pchVersion);
            return NativeUtils005_wrapInterface(iface);
        }
        return NULL;
        
	};

	virtual ISteamMatchmaking *GetISteamMatchmaking( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		return Native012_GetISteamMatchmaking(orig, hSteamUser, hSteamPipe, pchVersion);
	};

	virtual ISteamMatchmakingServers *GetISteamMatchmakingServers( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		return Native012_GetISteamMatchmakingServers(orig, hSteamUser, hSteamPipe, pchVersion);
	};

	virtual void *GetISteamGenericInterface( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
        if(strcmp("STEAMAPPTICKET_INTERFACE_VERSION001", pchVersion) == 0) {
            void *iface = Native012_GetISteamGenericInterface(orig, hSteamUser, hSteamPipe, pchVersion);
            return NativeAppTicket001_wrapInterface((ISteamAppTicket001*)iface);
        }
        return NULL;
	};

	virtual ISteamUserStats *GetISteamUserStats( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		return Native012_GetISteamUserStats(orig, hSteamUser, hSteamPipe, pchVersion);
	};

	virtual ISteamGameServerStats *GetISteamGameServerStats( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		return Native012_GetISteamGameServerStats(orig, hSteamUser, hSteamPipe, pchVersion);
	};

	virtual ISteamApps *GetISteamApps( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		return Native012_GetISteamApps(orig, hSteamUser, hSteamPipe, pchVersion);
	};

	virtual ISteamNetworking *GetISteamNetworking( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		return Native012_GetISteamNetworking(orig, hSteamUser, hSteamPipe, pchVersion);
	};

	virtual ISteamRemoteStorage *GetISteamRemoteStorage( HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		return Native012_GetISteamRemoteStorage(orig, hSteamuser, hSteamPipe, pchVersion);
	};

	virtual ISteamScreenshots *GetISteamScreenshots( HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		return Native012_GetISteamScreenshots(orig, hSteamuser, hSteamPipe, pchVersion);
	};

	virtual void RunFrame() {
		return Native012_RunFrame(orig);
	};

	virtual uint32 GetIPCCallCount() {
		return Native012_GetIPCCallCount(orig);
	};

	virtual void SetWarningMessageHook( SteamAPIWarningMessageHook_t pFunction ) {
		Native012_SetWarningMessageHook(orig, pFunction);
	};

	virtual bool BShutdownIfAllPipesClosed() {
		return Native012_BShutdownIfAllPipesClosed(orig);
	};

	virtual ISteamHTTP* GetISteamHTTP( HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		return Native012_GetISteamHTTP(orig, hSteamuser, hSteamPipe, pchVersion);
	};
	
	virtual ISteamUnifiedMessages* GetISteamUnifiedMessages( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) {
		return Native012_GetISteamUnifiedMessages(orig, hSteamUser, hSteamPipe, pchVersion);
	};

    LoggedSteamClient012(ISteamClient012 *_orig) {
        orig = _orig;
    }
    
    ~LoggedSteamClient012() {
        Native012_delete(orig);
    }

private:
    ISteamClient012 *orig;
};

void *Native012_wrapInterface(ISteamClient012 *iface) {
    return new LoggedSteamClient012(iface);
};

