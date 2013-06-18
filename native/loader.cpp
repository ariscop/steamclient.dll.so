extern "C" {
	#include "loader.h"

	//NOTE: Interface_OSW needs snprintf
	#include <stdio.h>
	//and string.h
	#include <string.h>
}
//and it's own types, srsly wtf
#include <open-steamworks/SteamTypes.h>
#include <open-steamworks/Interface_OSW.h>

CSteamAPILoader *loader;
const DynamicLibrary *steamclient_so;
const DynamicLibrary *libsteam_so;

void *Steamclient_load() {
    loader = new CSteamAPILoader;
    steamclient_so = loader->GetSteamClientModule();
    libsteam_so = loader->GetSteamModule();
};

void Steamclient_unload() {
    delete loader;
};
void *Steamclient_getSym(char *name) {
    return steamclient_so->GetSymbol(name);
};

