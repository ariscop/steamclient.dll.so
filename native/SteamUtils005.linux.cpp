#include "SteamUtils005.h"

#include <wine/debug.h>
WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

void NativeUtils005_delete(ISteamUtils005 *orig) {
	WINE_TRACE("\n");
	delete orig;
}

uint32 NativeUtils005_GetSecondsSinceAppActive(ISteamUtils005 *orig) {
	WINE_TRACE("\n");
	return orig->GetSecondsSinceAppActive();
}

uint32 NativeUtils005_GetSecondsSinceComputerActive(ISteamUtils005 *orig) {
	WINE_TRACE("\n");
	return orig->GetSecondsSinceComputerActive();
}

EUniverse NativeUtils005_GetConnectedUniverse(ISteamUtils005 *orig) {
	WINE_TRACE("\n");
	return orig->GetConnectedUniverse();
}

uint32 NativeUtils005_GetServerRealTime(ISteamUtils005 *orig) {
	WINE_TRACE("\n");
	return orig->GetServerRealTime();
}

const char *NativeUtils005_GetIPCountry(ISteamUtils005 *orig) {
	WINE_TRACE("\n");
	return orig->GetIPCountry();
}

bool NativeUtils005_GetImageSize(ISteamUtils005 *orig, int iImage, uint32 *pnWidth, uint32 *pnHeight ) {
	WINE_TRACE("\n");
	return orig->GetImageSize(iImage, pnWidth, pnHeight);
}

bool NativeUtils005_GetImageRGBA(ISteamUtils005 *orig, int iImage, uint8 *pubDest, int nDestBufferSize ) {
	WINE_TRACE("\n");
	return orig->GetImageRGBA(iImage, pubDest, nDestBufferSize);
}

bool NativeUtils005_GetCSERIPPort(ISteamUtils005 *orig, uint32 *unIP, uint16 *usPort ) {
	WINE_TRACE("\n");
	return orig->GetCSERIPPort(unIP, usPort);
}

uint8 NativeUtils005_GetCurrentBatteryPower(ISteamUtils005 *orig) {
	WINE_TRACE("\n");
	return orig->GetCurrentBatteryPower();
}

uint32 NativeUtils005_GetAppID(ISteamUtils005 *orig) {
	WINE_TRACE("\n");
    uint32 ret = orig->GetAppID();
    WINE_TRACE("returned %d\n", ret);
    return ret;
}

void NativeUtils005_SetOverlayNotificationPosition(ISteamUtils005 *orig, ENotificationPosition eNotificationPosition ) {
	WINE_TRACE("\n");
	return orig->SetOverlayNotificationPosition(eNotificationPosition);
}

bool NativeUtils005_IsAPICallCompleted(ISteamUtils005 *orig, SteamAPICall_t hSteamAPICall, bool *pbFailed ) {
	WINE_TRACE("\n");
	return orig->IsAPICallCompleted(hSteamAPICall, pbFailed);
}

ESteamAPICallFailure NativeUtils005_GetAPICallFailureReason(ISteamUtils005 *orig, SteamAPICall_t hSteamAPICall ) {
	WINE_TRACE("\n");
	return orig->GetAPICallFailureReason(hSteamAPICall);
}

bool NativeUtils005_GetAPICallResult(ISteamUtils005 *orig, SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed ) {
	WINE_TRACE("\n");
	return orig->GetAPICallResult(hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
}

void NativeUtils005_RunFrame(ISteamUtils005 *orig) {
	WINE_TRACE("\n");
	return orig->RunFrame();
}

uint32 NativeUtils005_GetIPCCallCount(ISteamUtils005 *orig) {
	WINE_TRACE("\n");
	return orig->GetIPCCallCount();
}

void NativeUtils005_SetWarningMessageHook(ISteamUtils005 *orig, SteamAPIWarningMessageHook_t pFunction ) {
	WINE_TRACE("\n");
	return orig->SetWarningMessageHook(pFunction);
}

bool NativeUtils005_IsOverlayEnabled(ISteamUtils005 *orig) {
	WINE_TRACE("\n");
	return orig->IsOverlayEnabled();
}

bool NativeUtils005_BOverlayNeedsPresent(ISteamUtils005 *orig) {
	WINE_TRACE("\n");
	return orig->BOverlayNeedsPresent();
}

SteamAPICall_t NativeUtils005_CheckFileSignature(ISteamUtils005 *orig, const char *szFileName ) {
	WINE_TRACE("\n");
	return orig->CheckFileSignature(szFileName);
}

bool NativeUtils005_ShowGamepadTextInput(ISteamUtils005 *orig, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eInputLineMode, const char *szText, uint32 uMaxLength ) {
	WINE_TRACE("\n");
	return orig->ShowGamepadTextInput(eInputMode, eInputLineMode, szText, uMaxLength);
}

uint32 NativeUtils005_GetEnteredGamepadTextLength(ISteamUtils005 *orig) {
	WINE_TRACE("\n");
	return orig->GetEnteredGamepadTextLength();
}

bool NativeUtils005_GetEnteredGamepadTextInput(ISteamUtils005 *orig, char *pchValue, uint32 cchValueMax ) {
	WINE_TRACE("\n");
	return orig->GetEnteredGamepadTextInput(pchValue, cchValueMax);
}
