#include <open-steamworks/SteamTypes.h>
#include "SteamUser016.h"
#include "SteamUtils005.h"
#include "SteamAppTicket001.h"
#include "SteamClient008.h"
#include "SteamClient012.h"

//not sure why this is exported
S_API void** STEAM_CALL Native_OPENSSL_Applink();

S_API void STEAM_CALL Native_Breakpad_SteamMiniDumpInit( uint32 a, const char *b, const char *c );
S_API void STEAM_CALL Native_Breakpad_SteamSetAppID( uint32 unAppID );
S_API errno_t STEAM_CALL Native_Breakpad_SteamSetSteamID( uint64 ulSteamID );
S_API errno_t STEAM_CALL Native_Breakpad_SteamWriteMiniDumpSetComment( const char *pchMsg );
S_API void STEAM_CALL Native_Breakpad_SteamWriteMiniDumpUsingExceptionInfoWithBuildId( int a, int b );
S_API void* STEAM_CALL Native_CreateInterface( const char *pName, int *pReturnCode );
S_API bool STEAM_CALL Native_Steam_BConnected( HSteamUser hUser, HSteamPipe hSteamPipe );
S_API bool STEAM_CALL Native_Steam_BGetCallback( HSteamPipe hSteamPipe, CallbackMsg_t *pCallbackMsg );
S_API bool STEAM_CALL Native_Steam_BLoggedOn( HSteamUser hUser, HSteamPipe hSteamPipe );
S_API bool STEAM_CALL Native_Steam_BReleaseSteamPipe( HSteamPipe hSteamPipe );
S_API HSteamUser STEAM_CALL Native_Steam_ConnectToGlobalUser( HSteamPipe hSteamPipe );
S_API HSteamUser STEAM_CALL Native_Steam_CreateGlobalUser( HSteamPipe *phSteamPipe );
S_API HSteamUser STEAM_CALL Native_Steam_CreateLocalUser( HSteamPipe *phSteamPipe, EAccountType eAccountType );
S_API HSteamPipe STEAM_CALL Native_Steam_CreateSteamPipe();
S_API void STEAM_CALL Native_Steam_FreeLastCallback( HSteamPipe hSteamPipe );
S_API bool STEAM_CALL Native_Steam_GSBLoggedOn( void *phSteamHandle );
S_API bool STEAM_CALL Native_Steam_GSBSecure( void *phSteamHandle);
S_API bool STEAM_CALL Native_Steam_GSGetSteam2GetEncryptionKeyToSendToNewClient( void *phSteamHandle, void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey );
S_API uint64 STEAM_CALL Native_Steam_GSGetSteamID();
S_API void STEAM_CALL Native_Steam_GSLogOff( void *phSteamHandle );
S_API void STEAM_CALL Native_Steam_GSLogOn( void *phSteamHandle );
S_API bool STEAM_CALL Native_Steam_GSRemoveUserConnect( void *phSteamHandle, uint32 unUserID );
S_API bool STEAM_CALL Native_Steam_GSSendSteam2UserConnect( void *phSteamHandle, uint32 unUserID, const void *pvRawKey, uint32 unKeyLen, uint32 unIPPublic, uint16 usPort, const void *pvCookie, uint32 cubCookie );
S_API bool STEAM_CALL Native_Steam_GSSendSteam3UserConnect( void *phSteamHandle, uint64 steamID, uint32 unIPPublic, const void *pvCookie, uint32 cubCookie );
S_API bool STEAM_CALL Native_Steam_GSSendUserDisconnect( void *phSteamHandle, uint64 ulSteamID, uint32 unUserID );
S_API bool STEAM_CALL Native_Steam_GSSendUserStatusResponse( void *phSteamHandle, uint64 ulSteamID, int nSecondsConnected, int nSecondsSinceLast );
S_API bool STEAM_CALL Native_Steam_GSSetServerType( void *phSteamHandle, int32 nAppIdServed, uint32 unServerFlags, uint32 unGameIP, uint32 unGamePort, const char *pchGameDir, const char *pchVersion );
S_API void STEAM_CALL Native_Steam_GSSetSpawnCount( void *phSteamHandle, uint32 ucSpawn );
S_API bool STEAM_CALL Native_Steam_GSUpdateStatus( void *phSteamHandle, int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pchMapName );
S_API bool STEAM_CALL Native_Steam_GetAPICallResult( HSteamPipe hSteamPipe, SteamAPICall_t hSteamAPICall, void* pCallback, int cubCallback, int iCallbackExpected, bool* pbFailed );
S_API void* STEAM_CALL Native_Steam_GetGSHandle( HSteamUser hUser, HSteamPipe hSteamPipe );
S_API int STEAM_CALL Native_Steam_InitiateGameConnection( HSteamUser hUser, HSteamPipe hSteamPipe, void *pBlob, int cbMaxBlob, uint64 steamID, int nGameAppID, uint32 unIPServer, uint16 usPortServer, bool bSecure );
S_API void STEAM_CALL Native_Steam_LogOff( HSteamUser hUser, HSteamPipe hSteamPipe );
S_API void STEAM_CALL Native_Steam_LogOn( HSteamUser hUser, HSteamPipe hSteamPipe, uint64 ulSteamID );
S_API void STEAM_CALL Native_Steam_ReleaseUser( HSteamPipe hSteamPipe, HSteamUser hUser );
S_API void STEAM_CALL Native_Steam_SetLocalIPBinding( uint32 unIP, uint16 usLocalPort );
S_API void STEAM_CALL Native_Steam_TerminateGameConnection( HSteamUser hUser, HSteamPipe hSteamPipe, uint32 unIPServer, uint16 usPortServer );

