#include "SteamAppTicket001.h"

static ISteamAppTicket001 *orig;

class LoggedSteamAppTicket001 : public ISteamAppTicket001
{
public:
	virtual uint32 GetAppOwnershipTicketData(
        AppId_t nAppId,
        void *pvSignedTicket,
        uint32 cbSignedTicket,
        uint32 *piAppId,
        uint32 *piSteamId,
        uint32 *piSignature,
        uint32 *pcbSignature
    )
    {
        return NativeAppTicket001_GetAppOwnershipTicketData(
            orig,
            nAppId,
            pvSignedTicket,
            cbSignedTicket,
            piAppId,
            piSteamId,
            piSignature,
            pcbSignature
        );
    }

};

static LoggedSteamAppTicket001 client;

void *NativeAppTicket001_wrapInterface(ISteamAppTicket001 *iface) {
    orig = iface;
    return &client;
};

