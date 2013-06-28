extern "C" {
	#include "loader.h"

	//NOTE: Interface_OSW needs snprintf
	#include <stdio.h>
	//and string.h
	#include <string.h>
    
    #include <wine/debug.h>
    WINE_DEFAULT_DEBUG_CHANNEL(steamclient);
}
//and it's own types, srsly wtf
#include <open-steamworks/SteamTypes.h>
#include <open-steamworks/Interface_OSW.h>

CSteamAPILoader *loader;
const DynamicLibrary *steamclient_so;
const DynamicLibrary *libsteam_so;

int Steamclient_load() {
    loader = new CSteamAPILoader;
    steamclient_so = loader->GetSteamClientModule();
    WINE_TRACE("steamclient.so at %p\n", steamclient_so);
    libsteam_so = loader->GetSteamModule();
    WINE_TRACE("libsteam.so at %p\n", libsteam_so);
    if(!(steamclient_so && libsteam_so)) {
        WINE_ERR("Failed to load native steam librarys\n");
        return 0;
    }
    return 1;
};

void Steamclient_unload() {
    delete loader;
};
void *Steamclient_getSym(char *name) {
    return steamclient_so->GetSymbol(name);
};

