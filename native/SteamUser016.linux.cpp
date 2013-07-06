#include "SteamUser016.h"

#include <wine/debug.h>
WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

HSteamUser NativeUser016_GetHSteamUser(ISteamUser016 *orig) {
	WINE_TRACE("\n");
	return orig->GetHSteamUser();
}

bool NativeUser016_BLoggedOn(ISteamUser016 *orig) {
	WINE_TRACE("\n");
	return orig->BLoggedOn();
}

//STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
void NativeUser016_GetSteamID(ISteamUser016 *orig, uint64 *ret) {
    WINE_TRACE("\n");
    CSteamID id = orig->GetSteamID();
    WINE_TRACE("returned %s : %s\n", id.SteamRender(), id.Render()); 
    *ret = id.ConvertToUint64();
}

int NativeUser016_InitiateGameConnection(ISteamUser016 *orig, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure) {
	WINE_TRACE("\n");
	return orig->InitiateGameConnection(pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

void NativeUser016_TerminateGameConnection(ISteamUser016 *orig, uint32 unIPServer, uint16 usPortServer) {
	WINE_TRACE("\n");
	return orig->TerminateGameConnection(unIPServer, usPortServer);
}

void NativeUser016_TrackAppUsageEvent(ISteamUser016 *orig, CGameID gameID, EAppUsageEvent eAppUsageEvent, const char *pchExtraInfo) {
	WINE_TRACE("\n");
	return orig->TrackAppUsageEvent(gameID, eAppUsageEvent, pchExtraInfo);
}

bool NativeUser016_GetUserDataFolder(ISteamUser016 *orig, char *pchBuffer, int cubBuffer) {
	WINE_TRACE("\n");
	return orig->GetUserDataFolder(pchBuffer, cubBuffer);
}

void NativeUser016_StartVoiceRecording(ISteamUser016 *orig) {
	WINE_TRACE("\n");
	return orig->StartVoiceRecording();
}

void NativeUser016_StopVoiceRecording(ISteamUser016 *orig) {
	WINE_TRACE("\n");
	return orig->StopVoiceRecording();
}

EVoiceResult NativeUser016_GetAvailableVoice(ISteamUser016 *orig,uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate) {
	WINE_TRACE("\n");
	return orig->GetAvailableVoice(pcbCompressed, pcbUncompressed, nUncompressedVoiceDesiredSampleRate);
}

EVoiceResult NativeUser016_GetVoice(ISteamUser016 *orig, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate) {
	WINE_TRACE("\n");
	return orig->GetVoice(bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed, pUncompressedDestBuffer, cbUncompressedDestBufferSize, nUncompressBytesWritten, nUncompressedVoiceDesiredSampleRate);
}

EVoiceResult NativeUser016_DecompressVoice(ISteamUser016 *orig, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate) {
	WINE_TRACE("\n");
	return orig->DecompressVoice(pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
}

uint32 NativeUser016_GetVoiceOptimalSampleRate(ISteamUser016 *orig) {
	WINE_TRACE("\n");
	return orig->GetVoiceOptimalSampleRate();
}

HAuthTicket NativeUser016_GetAuthSessionTicket(ISteamUser016 *orig, void *pTicket, int cbMaxTicket, uint32 *pcbTicket) {
	WINE_TRACE("\n");
	return orig->GetAuthSessionTicket(pTicket, cbMaxTicket, pcbTicket);
}

EBeginAuthSessionResult NativeUser016_BeginAuthSession(ISteamUser016 *orig, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID) {
	WINE_TRACE("\n");
	return orig->BeginAuthSession(pAuthTicket, cbAuthTicket, steamID);
}

void NativeUser016_EndAuthSession(ISteamUser016 *orig, CSteamID steamID) {
	WINE_TRACE("\n");
	return orig->EndAuthSession(steamID);
}

void NativeUser016_CancelAuthTicket(ISteamUser016 *orig, HAuthTicket hAuthTicket) {
	WINE_TRACE("\n");
	return orig->CancelAuthTicket(hAuthTicket);
}

EUserHasLicenseForAppResult NativeUser016_UserHasLicenseForApp(ISteamUser016 *orig, CSteamID steamID, AppId_t appID) {
	WINE_TRACE("\n");
	return orig->UserHasLicenseForApp(steamID, appID);
}

bool NativeUser016_BIsBehindNAT(ISteamUser016 *orig) {
	WINE_TRACE("\n");
	return orig->BIsBehindNAT();
}

void NativeUser016_AdvertiseGame(ISteamUser016 *orig, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer) {
	WINE_TRACE("\n");
	return orig->AdvertiseGame(steamIDGameServer, unIPServer, usPortServer);
}

SteamAPICall_t NativeUser016_RequestEncryptedAppTicket(ISteamUser016 *orig, void *pDataToInclude, int cbDataToInclude) {
	WINE_TRACE("\n");
	return orig->RequestEncryptedAppTicket(pDataToInclude, cbDataToInclude);
}

bool NativeUser016_GetEncryptedAppTicket(ISteamUser016 *orig, void *pTicket, int cbMaxTicket, uint32 *pcbTicket) {
	WINE_TRACE("\n");
	return orig->GetEncryptedAppTicket(pTicket, cbMaxTicket, pcbTicket);
}

