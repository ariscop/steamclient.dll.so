#include <open-steamworks/ISteamUtils005.h>

extern "C" {
	extern uint32 NativeUtils005_GetSecondsSinceAppActive(ISteamUtils005 *orig);
	extern uint32 NativeUtils005_GetSecondsSinceComputerActive(ISteamUtils005 *orig);
	extern EUniverse NativeUtils005_GetConnectedUniverse(ISteamUtils005 *orig);
	extern uint32 NativeUtils005_GetServerRealTime(ISteamUtils005 *orig);
	extern const char *NativeUtils005_GetIPCountry(ISteamUtils005 *orig);
	extern bool NativeUtils005_GetImageSize(ISteamUtils005 *orig, int iImage, uint32 *pnWidth, uint32 *pnHeight );
	extern bool NativeUtils005_GetImageRGBA(ISteamUtils005 *orig, int iImage, uint8 *pubDest, int nDestBufferSize );
	extern bool NativeUtils005_GetCSERIPPort(ISteamUtils005 *orig, uint32 *unIP, uint16 *usPort );
	extern uint8 NativeUtils005_GetCurrentBatteryPower(ISteamUtils005 *orig);
	extern uint32 NativeUtils005_GetAppID(ISteamUtils005 *orig);
	extern void NativeUtils005_SetOverlayNotificationPosition(ISteamUtils005 *orig, ENotificationPosition eNotificationPosition );
	extern bool NativeUtils005_IsAPICallCompleted(ISteamUtils005 *orig, SteamAPICall_t hSteamAPICall, bool *pbFailed );
	extern ESteamAPICallFailure NativeUtils005_GetAPICallFailureReason(ISteamUtils005 *orig, SteamAPICall_t hSteamAPICall );
	extern bool NativeUtils005_GetAPICallResult(ISteamUtils005 *orig, SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed );
	extern void NativeUtils005_RunFrame(ISteamUtils005 *orig);
	extern uint32 NativeUtils005_GetIPCCallCount(ISteamUtils005 *orig);
	extern void NativeUtils005_SetWarningMessageHook(ISteamUtils005 *orig, SteamAPIWarningMessageHook_t pFunction );
	extern bool NativeUtils005_IsOverlayEnabled(ISteamUtils005 *orig);
	extern bool NativeUtils005_BOverlayNeedsPresent(ISteamUtils005 *orig);
	extern SteamAPICall_t NativeUtils005_CheckFileSignature(ISteamUtils005 *orig, const char *szFileName );
	extern bool NativeUtils005_ShowGamepadTextInput(ISteamUtils005 *orig, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eInputLineMode, const char *szText, uint32 uMaxLength );
	extern uint32 NativeUtils005_GetEnteredGamepadTextLength(ISteamUtils005 *orig);
	extern bool NativeUtils005_GetEnteredGamepadTextInput(ISteamUtils005 *orig, char *pchValue, uint32 cchValueMax );
    
    extern void *NativeUtils005_wrapInterface(ISteamUtils005 *iface);
    extern void NativeUtils005_delete(ISteamUtils005 *iface);
}
