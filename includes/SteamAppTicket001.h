#include <open-steamworks/ISteamAppTicket001.h>

extern "C" {
    extern uint32 NativeAppTicket001_GetAppOwnershipTicketData( ISteamAppTicket001 *orig, AppId_t nAppId, void *pvSignedTicket, uint32 cbSignedTicket, uint32 *piAppId, uint32 *piSteamId, uint32 *piSignature, uint32 *pcbSignature );
    
    extern void *NativeAppTicket001_wrapInterface(ISteamAppTicket001 *iface);
    extern void NativeAppTicket001_delete(ISteamAppTicket001 *iface);
}
