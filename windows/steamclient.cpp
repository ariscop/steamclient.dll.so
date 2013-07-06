#include <native_steamclient.h>
#include <string.h>

#define PROXY_FUNCTION( name, ... ) \
    return Native_##name(__VA_ARGS__);

#undef STEAM_CALL
#define STEAM_CALL __declspec(dllexport)

extern "C" {

STEAM_CALL void* CreateInterface( const char *pName, int *pReturnCode )
{
    if(pReturnCode)
        *pReturnCode = 0;
    
    if(strcmp("SteamClient012", pName) == 0) {
        void *iface = Native_CreateInterface(pName, pReturnCode);
        return Native012_wrapInterface((ISteamClient012*)iface);
    }
    if(strcmp("SteamClient008", pName) == 0) {
        void *iface = Native_CreateInterface(pName, pReturnCode);
        return Native008_wrapInterface((ISteamClient008*)iface);
    }
    if(strcmp("SteamClient007", pName) == 0) {
        void *iface = Native_CreateInterface(pName, pReturnCode);
        return Native007_wrapInterface((ISteamClient007*)iface);
    }
    
    if(pReturnCode)
        *pReturnCode = 1;
    
    return NULL;
}

STEAM_CALL void** OPENSSL_Applink()
{
    PROXY_FUNCTION( OPENSSL_Applink )
}

STEAM_CALL void Breakpad_SteamMiniDumpInit( uint32 a, const char *b, const char *c )
{
    PROXY_FUNCTION( Breakpad_SteamMiniDumpInit, a, b, c )
}

STEAM_CALL void Breakpad_SteamSetAppID( uint32 unAppID )
{
    PROXY_FUNCTION( Breakpad_SteamSetAppID, unAppID )
}

STEAM_CALL errno_t Breakpad_SteamSetSteamID( uint64 ulSteamID )
{
    PROXY_FUNCTION( Breakpad_SteamSetSteamID, ulSteamID )
}

STEAM_CALL errno_t Breakpad_SteamWriteMiniDumpSetComment( const char *pchMsg )
{
    PROXY_FUNCTION( Breakpad_SteamWriteMiniDumpSetComment, pchMsg )
}

STEAM_CALL void Breakpad_SteamWriteMiniDumpUsingExceptionInfoWithBuildId( int a, int b )
{
    PROXY_FUNCTION( Breakpad_SteamWriteMiniDumpUsingExceptionInfoWithBuildId, a, b )
}

STEAM_CALL bool Steam_BConnected( HSteamUser hUser, HSteamPipe hSteamPipe )
{
    PROXY_FUNCTION( Steam_BConnected, hUser, hSteamPipe )
}

STEAM_CALL bool Steam_BGetCallback( HSteamPipe hSteamPipe, CallbackMsg_t *pCallbackMsg )
{
    PROXY_FUNCTION( Steam_BGetCallback, hSteamPipe, pCallbackMsg )
}

STEAM_CALL bool Steam_BLoggedOn( HSteamUser hUser, HSteamPipe hSteamPipe )
{
    PROXY_FUNCTION( Steam_BLoggedOn, hUser, hSteamPipe )
}

STEAM_CALL bool Steam_BReleaseSteamPipe( HSteamPipe hSteamPipe )
{
    PROXY_FUNCTION( Steam_BReleaseSteamPipe, hSteamPipe )
}

STEAM_CALL HSteamUser Steam_ConnectToGlobalUser( HSteamPipe hSteamPipe )
{
    PROXY_FUNCTION( Steam_ConnectToGlobalUser, hSteamPipe )
}

STEAM_CALL HSteamUser Steam_CreateGlobalUser( HSteamPipe *phSteamPipe )
{
    PROXY_FUNCTION( Steam_CreateGlobalUser, phSteamPipe )
}

STEAM_CALL HSteamUser Steam_CreateLocalUser( HSteamPipe *phSteamPipe, EAccountType eAccountType )
{
    PROXY_FUNCTION( Steam_CreateLocalUser, phSteamPipe, eAccountType )
}

STEAM_CALL HSteamPipe Steam_CreateSteamPipe()
{
    PROXY_FUNCTION( Steam_CreateSteamPipe )
}

STEAM_CALL void Steam_FreeLastCallback( HSteamPipe hSteamPipe )
{
    PROXY_FUNCTION( Steam_FreeLastCallback, hSteamPipe )
}

STEAM_CALL bool Steam_GSBLoggedOn( void *phSteamHandle )
{
    PROXY_FUNCTION( Steam_GSBLoggedOn, phSteamHandle )
}

STEAM_CALL bool Steam_GSBSecure( void *phSteamHandle)
{
    PROXY_FUNCTION( Steam_GSBSecure, phSteamHandle)
}

STEAM_CALL bool Steam_GSGetSteam2GetEncryptionKeyToSendToNewClient( void *phSteamHandle, void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey )
{
    PROXY_FUNCTION( Steam_GSGetSteam2GetEncryptionKeyToSendToNewClient, phSteamHandle, pvEncryptionKey, pcbEncryptionKey, cbMaxEncryptionKey )
}

STEAM_CALL uint64 Steam_GSGetSteamID()
{
    PROXY_FUNCTION( Steam_GSGetSteamID)
}

STEAM_CALL void Steam_GSLogOff( void *phSteamHandle )
{
    PROXY_FUNCTION( Steam_GSLogOff, phSteamHandle )
}

STEAM_CALL void Steam_GSLogOn( void *phSteamHandle )
{
    PROXY_FUNCTION( Steam_GSLogOn, phSteamHandle )
}

STEAM_CALL bool Steam_GSRemoveUserConnect( void *phSteamHandle, uint32 unUserID )
{
    PROXY_FUNCTION( Steam_GSRemoveUserConnect, phSteamHandle, unUserID )
}

STEAM_CALL bool Steam_GSSendSteam2UserConnect( void *phSteamHandle, uint32 unUserID, const void *pvRawKey, uint32 unKeyLen, uint32 unIPPublic, uint16 usPort, const void *pvCookie, uint32 cubCookie )
{
    PROXY_FUNCTION( Steam_GSSendSteam2UserConnect, phSteamHandle, unUserID, pvRawKey, unKeyLen, unIPPublic, usPort, pvCookie, cubCookie )
}

STEAM_CALL bool Steam_GSSendSteam3UserConnect( void *phSteamHandle, uint64 steamID, uint32 unIPPublic, const void *pvCookie, uint32 cubCookie )
{
    PROXY_FUNCTION( Steam_GSSendSteam3UserConnect, phSteamHandle, steamID, unIPPublic, pvCookie, cubCookie )
}

STEAM_CALL bool Steam_GSSendUserDisconnect( void *phSteamHandle, uint64 ulSteamID, uint32 unUserID )
{
    PROXY_FUNCTION( Steam_GSSendUserDisconnect, phSteamHandle, ulSteamID, unUserID )
}

STEAM_CALL bool Steam_GSSendUserStatusResponse( void *phSteamHandle, uint64 ulSteamID, int nSecondsConnected, int nSecondsSinceLast )
{
    PROXY_FUNCTION( Steam_GSSendUserStatusResponse, phSteamHandle, ulSteamID, nSecondsConnected, nSecondsSinceLast )
}

STEAM_CALL bool Steam_GSSetServerType( void *phSteamHandle, int32 nAppIdServed, uint32 unServerFlags, uint32 unGameIP, uint32 unGamePort, const char *pchGameDir, const char *pchVersion )
{
    PROXY_FUNCTION( Steam_GSSetServerType, phSteamHandle, nAppIdServed, unServerFlags, unGameIP, unGamePort, pchGameDir, pchVersion )
}

STEAM_CALL void Steam_GSSetSpawnCount( void *phSteamHandle, uint32 ucSpawn )
{
    PROXY_FUNCTION( Steam_GSSetSpawnCount, phSteamHandle, ucSpawn )
}

STEAM_CALL bool Steam_GSUpdateStatus( void *phSteamHandle, int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pchMapName )
{
    PROXY_FUNCTION( Steam_GSUpdateStatus, phSteamHandle, cPlayers, cPlayersMax, cBotPlayers, pchServerName, pchMapName )
}

STEAM_CALL bool Steam_GetAPICallResult( HSteamPipe hSteamPipe, SteamAPICall_t hSteamAPICall, void* pCallback, int cubCallback, int iCallbackExpected, bool* pbFailed )
{
    PROXY_FUNCTION( Steam_GetAPICallResult, hSteamPipe, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed )
}

STEAM_CALL void* Steam_GetGSHandle( HSteamUser hUser, HSteamPipe hSteamPipe )
{
    PROXY_FUNCTION( Steam_GetGSHandle, hUser, hSteamPipe )
}

STEAM_CALL int Steam_InitiateGameConnection( HSteamUser hUser, HSteamPipe hSteamPipe, void *pBlob, int cbMaxBlob, uint64 steamID, int nGameAppID, uint32 unIPServer, uint16 usPortServer, bool bSecure )
{
    PROXY_FUNCTION( Steam_InitiateGameConnection, hUser, hSteamPipe, pBlob, cbMaxBlob, steamID, nGameAppID, unIPServer, usPortServer, bSecure )
}

STEAM_CALL void Steam_LogOff( HSteamUser hUser, HSteamPipe hSteamPipe )
{
    PROXY_FUNCTION( Steam_LogOff, hUser, hSteamPipe )
}

STEAM_CALL void Steam_LogOn( HSteamUser hUser, HSteamPipe hSteamPipe, uint64 ulSteamID )
{
    PROXY_FUNCTION( Steam_LogOn, hUser, hSteamPipe, ulSteamID )
}

STEAM_CALL void Steam_ReleaseUser( HSteamPipe hSteamPipe, HSteamUser hUser )
{
    PROXY_FUNCTION( Steam_ReleaseUser, hSteamPipe, hUser )
}

STEAM_CALL void Steam_SetLocalIPBinding( uint32 unIP, uint16 usLocalPort )
{
    PROXY_FUNCTION( Steam_SetLocalIPBinding, unIP, usLocalPort )
}

STEAM_CALL void Steam_TerminateGameConnection( HSteamUser hUser, HSteamPipe hSteamPipe, uint32 unIPServer, uint16 usPortServer )
{
    PROXY_FUNCTION( Steam_TerminateGameConnection, hUser, hSteamPipe, unIPServer, usPortServer )
}

} //extern "C"
