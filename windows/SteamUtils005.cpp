#include "SteamUtils005.h"

class LoggedSteamUtils005 : public ISteamUtils005
{
public:
	virtual uint32 GetSecondsSinceAppActive() {
		return NativeUtils005_GetSecondsSinceAppActive(orig);
	}

	virtual uint32 GetSecondsSinceComputerActive() {
		return NativeUtils005_GetSecondsSinceComputerActive(orig);
	}

	virtual EUniverse GetConnectedUniverse() {
		return NativeUtils005_GetConnectedUniverse(orig);
	}

	virtual uint32 GetServerRealTime() {
		return NativeUtils005_GetServerRealTime(orig);
	}

	virtual const char *GetIPCountry() {
		return NativeUtils005_GetIPCountry(orig);
	}

	virtual bool GetImageSize( int iImage, uint32 *pnWidth, uint32 *pnHeight ) {
		return NativeUtils005_GetImageSize(orig, iImage, pnWidth, pnHeight);
	}

	virtual bool GetImageRGBA( int iImage, uint8 *pubDest, int nDestBufferSize ) {
		return NativeUtils005_GetImageRGBA(orig, iImage, pubDest, nDestBufferSize);
	}

	virtual bool GetCSERIPPort( uint32 *unIP, uint16 *usPort ) {
		return NativeUtils005_GetCSERIPPort(orig, unIP, usPort);
	}

	virtual uint8 GetCurrentBatteryPower() {
		return NativeUtils005_GetCurrentBatteryPower(orig);
	}

	virtual uint32 GetAppID() {
		return NativeUtils005_GetAppID(orig);
	}

	virtual void SetOverlayNotificationPosition( ENotificationPosition eNotificationPosition ) {
		return NativeUtils005_SetOverlayNotificationPosition(orig, eNotificationPosition);
	}

	virtual bool IsAPICallCompleted( SteamAPICall_t hSteamAPICall, bool *pbFailed ) {
		return NativeUtils005_IsAPICallCompleted(orig, hSteamAPICall, pbFailed);
	}

	virtual ESteamAPICallFailure GetAPICallFailureReason( SteamAPICall_t hSteamAPICall ) {
		return NativeUtils005_GetAPICallFailureReason(orig, hSteamAPICall);
	}

	virtual bool GetAPICallResult( SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed ) {
		return NativeUtils005_GetAPICallResult(orig, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
	}

	virtual void RunFrame() {
		return NativeUtils005_RunFrame(orig);
	}

	virtual uint32 GetIPCCallCount() {
		return NativeUtils005_GetIPCCallCount(orig);
	}

	virtual void SetWarningMessageHook( SteamAPIWarningMessageHook_t pFunction ) {
		return NativeUtils005_SetWarningMessageHook(orig, pFunction);
	}

	virtual bool IsOverlayEnabled() {
		return NativeUtils005_IsOverlayEnabled(orig);
	}

	virtual bool BOverlayNeedsPresent() {
		return NativeUtils005_BOverlayNeedsPresent(orig);
	}

	virtual SteamAPICall_t CheckFileSignature( const char *szFileName ) {
		return NativeUtils005_CheckFileSignature(orig, szFileName);
	}

	virtual bool ShowGamepadTextInput( EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eInputLineMode, const char *szText, uint32 uMaxLength ) {
		return NativeUtils005_ShowGamepadTextInput(orig, eInputMode, eInputLineMode, szText, uMaxLength);
	}

	virtual uint32 GetEnteredGamepadTextLength() {
		return NativeUtils005_GetEnteredGamepadTextLength(orig);
	}

	virtual bool GetEnteredGamepadTextInput( char *pchValue, uint32 cchValueMax ) {
		return NativeUtils005_GetEnteredGamepadTextInput(orig, pchValue, cchValueMax);
	}
    
    LoggedSteamUtils005(ISteamUtils005 *_orig) {
        orig = _orig;
    }
    
    ~LoggedSteamUtils005() {
        NativeUtils005_delete(orig);
    }

private:
    ISteamUtils005 *orig;
};

void *NativeUtils005_wrapInterface(ISteamUtils005 *iface) {
    return new LoggedSteamUtils005(iface);
};
