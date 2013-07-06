#include "SteamUser016.h"

static ISteamUser016 *orig;

class LoggedSteamUser016 : public ISteamUser016 {
public:
	virtual HSteamUser GetHSteamUser() {
		return NativeUser016_GetHSteamUser(orig);
	}
	
	virtual bool BLoggedOn() {
		return NativeUser016_BLoggedOn(orig);
	}
	
	// returns the CSteamID of the account currently logged into the Steam client
	// a CSteamID is a unique identifier for an account, and used to differentiate users in all parts of the Steamworks API
	/*STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID) //virtual CSteamID GetSteamID() {
		return NativeUser016_
	}
	*/
    
    virtual void GetSteamID(CSteamID& id) {;
        uint64 ret;
        NativeUser016_GetSteamID(orig, &ret);
        id = CSteamID(ret);
    }
    
	virtual int InitiateGameConnection( void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure ) {
		return NativeUser016_InitiateGameConnection(orig, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
	}
	
	virtual void TerminateGameConnection( uint32 unIPServer, uint16 usPortServer ) {
		return NativeUser016_TerminateGameConnection(orig, unIPServer, usPortServer);
	}
	
	virtual void TrackAppUsageEvent( CGameID gameID, EAppUsageEvent eAppUsageEvent, const char *pchExtraInfo = "" ) {
		return NativeUser016_TrackAppUsageEvent(orig, gameID, eAppUsageEvent, pchExtraInfo);
	}
	
	virtual bool GetUserDataFolder( char *pchBuffer, int cubBuffer ) {
		return NativeUser016_GetUserDataFolder(orig, pchBuffer, cubBuffer);
	}
	
	virtual void StartVoiceRecording( ) {
		return NativeUser016_StartVoiceRecording(orig);
	}
	
	virtual void StopVoiceRecording( ) {
		return NativeUser016_StopVoiceRecording(orig);
	}
	
	virtual EVoiceResult GetAvailableVoice(uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate) {
		return NativeUser016_GetAvailableVoice(orig, pcbCompressed, pcbUncompressed, nUncompressedVoiceDesiredSampleRate);
	}
	
	virtual EVoiceResult GetVoice( bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate ) {
		return NativeUser016_GetVoice(orig, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed, pUncompressedDestBuffer, cbUncompressedDestBufferSize, nUncompressBytesWritten, nUncompressedVoiceDesiredSampleRate);
	}
	
	virtual EVoiceResult DecompressVoice( const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate ) {
		return NativeUser016_DecompressVoice(orig, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
	}
	
	virtual uint32 GetVoiceOptimalSampleRate() {
		return NativeUser016_GetVoiceOptimalSampleRate(orig);
	}
	
	virtual HAuthTicket GetAuthSessionTicket( void *pTicket, int cbMaxTicket, uint32 *pcbTicket ) {
		return NativeUser016_GetAuthSessionTicket(orig, pTicket, cbMaxTicket, pcbTicket);
	}
	
	virtual EBeginAuthSessionResult BeginAuthSession( const void *pAuthTicket, int cbAuthTicket, CSteamID steamID ) {
		return NativeUser016_BeginAuthSession(orig, pAuthTicket, cbAuthTicket, steamID);
	}
	
	virtual void EndAuthSession( CSteamID steamID ) {
		return NativeUser016_EndAuthSession(orig, steamID);
	}
	
	virtual void CancelAuthTicket( HAuthTicket hAuthTicket ) {
		return NativeUser016_CancelAuthTicket(orig, hAuthTicket);
	}
	
	virtual EUserHasLicenseForAppResult UserHasLicenseForApp( CSteamID steamID, AppId_t appID ) {
		return NativeUser016_UserHasLicenseForApp(orig, steamID, appID);
	}
	
	virtual bool BIsBehindNAT() {
		return NativeUser016_BIsBehindNAT(orig);
	}
	
	virtual void AdvertiseGame(CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer ) {
		return NativeUser016_AdvertiseGame(orig, steamIDGameServer, unIPServer, usPortServer);
	}
	
	virtual SteamAPICall_t RequestEncryptedAppTicket( void *pDataToInclude, int cbDataToInclude ) {
		return NativeUser016_RequestEncryptedAppTicket(orig, pDataToInclude, cbDataToInclude);
	}
	
	virtual bool GetEncryptedAppTicket( void *pTicket, int cbMaxTicket, uint32 *pcbTicket ) {
		return NativeUser016_GetEncryptedAppTicket(orig, pTicket, cbMaxTicket, pcbTicket);
	}

};

static LoggedSteamUser016 client;

void *NativeUser016_wrapInterface(ISteamUser016 *iface) {
    orig = iface;
    return &client;
};

