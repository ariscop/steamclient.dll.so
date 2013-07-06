#include "loader.h"
#include <dlfcn.h>
#include <wine/debug.h>

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);


void *steamclient_so;

int Steamclient_load() {
    steamclient_so = dlopen("/home/andrew/.steam/steam/ubuntu12_32/steamclient.so", RTLD_LOCAL | RTLD_LAZY);
    WINE_TRACE("steamclient.so at %p\n", steamclient_so);
    
    return steamclient_so != 0;
};

void Steamclient_unload() {
    dlclose(steamclient_so);
};
void *Steamclient_getSym(char *name) {
    return dlsym(steamclient_so, name);
};

