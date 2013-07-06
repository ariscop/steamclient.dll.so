#include "SteamAppTicket001.h"

#include <wine/debug.h>
WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

uint32 NativeAppTicket001_GetAppOwnershipTicketData(
    ISteamAppTicket001 *orig,
    AppId_t nAppId,
    void *pvSignedTicket,
    uint32 cbSignedTicket,
    uint32 *piAppId,
    uint32 *piSteamId,
    uint32 *piSignature,
    uint32 *pcbSignature
)
{
    WINE_TRACE("( %d %p %d %d %d %d %d )\n",
            nAppId,
            pvSignedTicket,
            cbSignedTicket,
            *piAppId,
            *piSteamId,
            *piSignature,
            *pcbSignature
    );
    uint32 ret = orig->GetAppOwnershipTicketData(
            nAppId,
            pvSignedTicket,
            cbSignedTicket,
            piAppId,
            piSteamId,
            piSignature,
            pcbSignature
    );
    WINE_TRACE("returned ( %d %p %d %d %d %d %d ) = %d\n",
            nAppId,
            pvSignedTicket,
            cbSignedTicket,
            *piAppId,
            *piSteamId,
            *piSignature,
            *pcbSignature,
            ret
    );
};
