#include "SteamAppTicket001.h"

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
    
    LoggedSteamAppTicket001(ISteamAppTicket001 *_orig) {
        orig = _orig;
    }
    
    ~LoggedSteamAppTicket001() {
        NativeAppTicket001_delete(orig);
    }

private:
    ISteamAppTicket001 *orig;
};

void *NativeAppTicket001_wrapInterface(ISteamAppTicket001 *iface) {
    return new LoggedSteamAppTicket001(iface);
};

