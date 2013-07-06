#include <open-steamworks/ISteamUser016.h>

extern "C" {
	extern HSteamUser NativeUser016_GetHSteamUser(ISteamUser016 *orig);
	extern bool NativeUser016_BLoggedOn(ISteamUser016 *orig);
	//STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
    extern void NativeUser016_GetSteamID(ISteamUser016 *orig, uint64 *ret);
	extern int NativeUser016_InitiateGameConnection(ISteamUser016 *orig, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure);
	extern void NativeUser016_TerminateGameConnection(ISteamUser016 *orig, uint32 unIPServer, uint16 usPortServer);
	extern void NativeUser016_TrackAppUsageEvent(ISteamUser016 *orig, CGameID gameID, EAppUsageEvent eAppUsageEvent, const char *pchExtraInfo = "");
	extern bool NativeUser016_GetUserDataFolder(ISteamUser016 *orig, char *pchBuffer, int cubBuffer);
	extern void NativeUser016_StartVoiceRecording(ISteamUser016 *orig);
	extern void NativeUser016_StopVoiceRecording(ISteamUser016 *orig);
	extern EVoiceResult NativeUser016_GetAvailableVoice(ISteamUser016 *orig,uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate);
	extern EVoiceResult NativeUser016_GetVoice(ISteamUser016 *orig, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate);
	extern EVoiceResult NativeUser016_DecompressVoice(ISteamUser016 *orig, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate);
	extern uint32 NativeUser016_GetVoiceOptimalSampleRate(ISteamUser016 *orig);
	extern HAuthTicket NativeUser016_GetAuthSessionTicket(ISteamUser016 *orig, void *pTicket, int cbMaxTicket, uint32 *pcbTicket);
	extern EBeginAuthSessionResult NativeUser016_BeginAuthSession(ISteamUser016 *orig, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID);
	extern void NativeUser016_EndAuthSession(ISteamUser016 *orig, CSteamID steamID);
	extern void NativeUser016_CancelAuthTicket(ISteamUser016 *orig, HAuthTicket hAuthTicket);
	extern EUserHasLicenseForAppResult NativeUser016_UserHasLicenseForApp(ISteamUser016 *orig, CSteamID steamID, AppId_t appID);
	extern bool NativeUser016_BIsBehindNAT(ISteamUser016 *orig);
	extern void NativeUser016_AdvertiseGame(ISteamUser016 *orig, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer);
	extern SteamAPICall_t NativeUser016_RequestEncryptedAppTicket(ISteamUser016 *orig, void *pDataToInclude, int cbDataToInclude);
	extern bool NativeUser016_GetEncryptedAppTicket(ISteamUser016 *orig, void *pTicket, int cbMaxTicket, uint32 *pcbTicket);
    
    extern void *NativeUser016_wrapInterface(ISteamUser016 *iface);
}
