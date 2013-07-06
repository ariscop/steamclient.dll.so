@ cdecl Native_OPENSSL_Applink()

@ cdecl Native_Breakpad_SteamMiniDumpInit( long ptr ptr )
@ cdecl Native_Breakpad_SteamSetAppID( long )
@ cdecl Native_Breakpad_SteamSetSteamID( int64 )
@ cdecl Native_Breakpad_SteamWriteMiniDumpSetComment( ptr )
@ cdecl Native_Breakpad_SteamWriteMiniDumpUsingExceptionInfoWithBuildId( long long )
@ cdecl Native_CreateInterface( ptr ptr )
@ cdecl Native_Steam_BConnected( long long )
@ cdecl Native_Steam_BGetCallback( long ptr )
@ cdecl Native_Steam_BLoggedOn( long long )
@ cdecl Native_Steam_BReleaseSteamPipe( long )
@ cdecl Native_Steam_ConnectToGlobalUser( long )
@ cdecl Native_Steam_CreateGlobalUser( ptr )
@ cdecl Native_Steam_CreateLocalUser( ptr long )
@ cdecl Native_Steam_CreateSteamPipe()
@ cdecl Native_Steam_FreeLastCallback( long )
@ cdecl Native_Steam_GSBLoggedOn( ptr )
@ cdecl Native_Steam_GSBSecure( ptr)
@ cdecl Native_Steam_GSGetSteam2GetEncryptionKeyToSendToNewClient( ptr ptr ptr long )
@ cdecl Native_Steam_GSGetSteamID()
@ cdecl Native_Steam_GSLogOff( ptr )
@ cdecl Native_Steam_GSLogOn( ptr )
@ cdecl Native_Steam_GSRemoveUserConnect( ptr long )
@ cdecl Native_Steam_GSSendSteam2UserConnect( ptr long ptr long long long ptr long )
@ cdecl Native_Steam_GSSendSteam3UserConnect( ptr int64 long ptr long )
@ cdecl Native_Steam_GSSendUserDisconnect( ptr int64 long )
@ cdecl Native_Steam_GSSendUserStatusResponse( ptr int64 long long )
@ cdecl Native_Steam_GSSetServerType( ptr long long long long ptr ptr )
@ cdecl Native_Steam_GSSetSpawnCount( ptr long )
@ cdecl Native_Steam_GSUpdateStatus( ptr long long long ptr ptr )
@ cdecl Native_Steam_GetAPICallResult( long int64 ptr long long ptr )
@ cdecl Native_Steam_GetGSHandle( long long )
@ cdecl Native_Steam_InitiateGameConnection( long long ptr long int64 long long long long )
@ cdecl Native_Steam_LogOff( long long )
@ cdecl Native_Steam_LogOn( long long int64 )
@ cdecl Native_Steam_ReleaseUser( long long )
@ cdecl Native_Steam_SetLocalIPBinding( long long )
@ cdecl Native_Steam_TerminateGameConnection( long long long long )

@ cdecl Native007_CreateSteamPipe(ptr)
@ cdecl Native007_BReleaseSteamPipe(ptr ptr)
@ cdecl Native007_ConnectToGlobalUser(ptr ptr)
@ cdecl Native007_CreateLocalUser(ptr ptr)
@ cdecl Native007_ReleaseUser(ptr ptr ptr)
@ cdecl Native007_GetISteamUser(ptr ptr ptr ptr)
@ cdecl Native007_GetISteamGameServer(ptr ptr ptr ptr)
@ cdecl Native007_SetLocalIPBinding(ptr long long)
@ cdecl Native007_GetISteamFriends(ptr ptr ptr ptr)
@ cdecl Native007_GetISteamUtils(ptr ptr ptr)
@ cdecl Native007_GetISteamMatchmaking(ptr ptr ptr ptr)
@ cdecl Native007_GetISteamMasterServerUpdater(ptr ptr ptr ptr)
@ cdecl Native007_GetISteamMatchmakingServers(ptr ptr ptr ptr)
@ cdecl Native007_GetISteamGenericInterface(ptr ptr ptr ptr)
@ cdecl Native007_GetISteamUserStats(ptr ptr ptr ptr)
@ cdecl Native007_GetISteamApps(ptr ptr ptr ptr)
@ cdecl Native007_GetISteamNetworking(ptr ptr ptr ptr)
@ cdecl Native007_GetISteamRemoteStorage(ptr ptr ptr ptr)
@ cdecl Native007_RunFrame(ptr)
@ cdecl Native007_GetIPCCallCount(ptr)
@ cdecl Native007_SetWarningMessageHook(ptr ptr)

@ cdecl Native008_CreateSteamPipe(ptr)
@ cdecl Native008_BReleaseSteamPipe(ptr ptr)
@ cdecl Native008_ConnectToGlobalUser(ptr ptr)
@ cdecl Native008_CreateLocalUser(ptr ptr ptr)
@ cdecl Native008_ReleaseUser(ptr ptr ptr)
@ cdecl Native008_GetISteamUser(ptr ptr ptr ptr)
@ cdecl Native008_GetISteamGameServer(ptr ptr ptr ptr)
@ cdecl Native008_SetLocalIPBinding(ptr long long)
@ cdecl Native008_GetISteamFriends(ptr ptr ptr ptr)
@ cdecl Native008_GetISteamUtils(ptr ptr ptr)
@ cdecl Native008_GetISteamMatchmaking(ptr ptr ptr ptr)
@ cdecl Native008_GetISteamMasterServerUpdater(ptr ptr ptr ptr)
@ cdecl Native008_GetISteamMatchmakingServers(ptr ptr ptr ptr)
@ cdecl Native008_GetISteamGenericInterface(ptr ptr ptr ptr)
@ cdecl Native008_GetISteamUserStats(ptr ptr ptr ptr)
@ cdecl Native008_GetISteamApps(ptr ptr ptr ptr)
@ cdecl Native008_GetISteamNetworking(ptr ptr ptr ptr)
@ cdecl Native008_GetISteamRemoteStorage(ptr ptr ptr ptr)
@ cdecl Native008_RunFrame(ptr)
@ cdecl Native008_GetIPCCallCount(ptr)
@ cdecl Native008_SetWarningMessageHook(ptr ptr)

@ cdecl Native012_CreateSteamPipe(ptr)
@ cdecl Native012_BReleaseSteamPipe(ptr ptr)
@ cdecl Native012_ConnectToGlobalUser(ptr ptr)
@ cdecl Native012_CreateLocalUser(ptr ptr ptr)
@ cdecl Native012_ReleaseUser(ptr ptr ptr)
@ cdecl Native012_GetISteamUser(ptr ptr ptr ptr)
@ cdecl Native012_GetISteamGameServer(ptr ptr ptr ptr)
@ cdecl Native012_SetLocalIPBinding(ptr long long)
@ cdecl Native012_GetISteamFriends(ptr ptr ptr ptr)
@ cdecl Native012_GetISteamUtils(ptr ptr ptr)
@ cdecl Native012_GetISteamMatchmaking(ptr ptr ptr ptr)
@ cdecl Native012_GetISteamMatchmakingServers(ptr ptr ptr ptr)
@ cdecl Native012_GetISteamGenericInterface(ptr ptr ptr ptr)
@ cdecl Native012_GetISteamUserStats(ptr ptr ptr ptr)
@ cdecl Native012_GetISteamGameServerStats(ptr ptr ptr ptr)
@ cdecl Native012_GetISteamApps(ptr ptr ptr ptr)
@ cdecl Native012_GetISteamNetworking(ptr ptr ptr ptr)
@ cdecl Native012_GetISteamRemoteStorage(ptr ptr ptr ptr)
@ cdecl Native012_GetISteamScreenshots(ptr ptr ptr ptr)
@ cdecl Native012_RunFrame(ptr)
@ cdecl Native012_GetIPCCallCount(ptr)
@ cdecl Native012_SetWarningMessageHook(ptr ptr)
@ cdecl Native012_BShutdownIfAllPipesClosed(ptr)
@ cdecl Native012_GetISteamHTTP(ptr ptr ptr ptr)
@ cdecl Native012_GetISteamUnifiedMessages(ptr ptr ptr ptr)

@ cdecl NativeAppTicket001_GetAppOwnershipTicketData(ptr long ptr ptr ptr ptr ptr ptr)
                                
@ cdecl NativeUtils005_GetSecondsSinceAppActive(ptr)
@ cdecl NativeUtils005_GetSecondsSinceComputerActive(ptr)
@ cdecl NativeUtils005_GetConnectedUniverse(ptr)
@ cdecl NativeUtils005_GetServerRealTime(ptr)
@ cdecl NativeUtils005_GetIPCountry(ptr)
@ cdecl NativeUtils005_GetImageSize(ptr long ptr ptr)
@ cdecl NativeUtils005_GetImageRGBA(ptr long ptr long)
@ cdecl NativeUtils005_GetCSERIPPort(ptr ptr ptr)
@ cdecl NativeUtils005_GetCurrentBatteryPower(ptr)
@ cdecl NativeUtils005_GetAppID(ptr)
@ cdecl NativeUtils005_SetOverlayNotificationPosition(ptr long)
@ cdecl NativeUtils005_IsAPICallCompleted(ptr ptr ptr)
@ cdecl NativeUtils005_GetAPICallFailureReason(ptr ptr)
@ cdecl NativeUtils005_GetAPICallResult(ptr ptr ptr long long ptr)
@ cdecl NativeUtils005_RunFrame(ptr)
@ cdecl NativeUtils005_GetIPCCallCount(ptr)
@ cdecl NativeUtils005_SetWarningMessageHook(ptr ptr)
@ cdecl NativeUtils005_IsOverlayEnabled(ptr)
@ cdecl NativeUtils005_BOverlayNeedsPresent(ptr)
@ cdecl NativeUtils005_CheckFileSignature(ptr ptr)
@ cdecl NativeUtils005_ShowGamepadTextInput(ptr long long ptr long)
@ cdecl NativeUtils005_GetEnteredGamepadTextLength(ptr)
@ cdecl NativeUtils005_GetEnteredGamepadTextInput(ptr ptr long)

@ cdecl NativeUser016_GetHSteamUser(ptr)
@ cdecl NativeUser016_BLoggedOn(ptr)
@ cdecl NativeUser016_GetSteamID(ptr ptr)
@ cdecl NativeUser016_InitiateGameConnection(ptr ptr long ptr long long long)
@ cdecl NativeUser016_TerminateGameConnection(ptr long long)
@ cdecl NativeUser016_TrackAppUsageEvent(ptr long long ptr)
@ cdecl NativeUser016_GetUserDataFolder(ptr ptr long)
@ cdecl NativeUser016_StartVoiceRecording(ptr)
@ cdecl NativeUser016_StopVoiceRecording(ptr)
@ cdecl NativeUser016_GetAvailableVoice(ptr ptr ptr long)
@ cdecl NativeUser016_GetVoice(ptr long ptr long ptr long ptr long ptr long)
@ cdecl NativeUser016_DecompressVoice(ptr ptr long ptr long ptr long)
@ cdecl NativeUser016_GetVoiceOptimalSampleRate(ptr)
@ cdecl NativeUser016_GetAuthSessionTicket(ptr ptr long long)
@ cdecl NativeUser016_BeginAuthSession(ptr ptr long long)
@ cdecl NativeUser016_EndAuthSession(ptr long)
@ cdecl NativeUser016_CancelAuthTicket(ptr long)
@ cdecl NativeUser016_UserHasLicenseForApp(ptr ptr long)
@ cdecl NativeUser016_BIsBehindNAT(ptr)
@ cdecl NativeUser016_AdvertiseGame(ptr ptr long long)
@ cdecl NativeUser016_RequestEncryptedAppTicket(ptr ptr long)
@ cdecl NativeUser016_GetEncryptedAppTicket(ptr ptr long ptr)

