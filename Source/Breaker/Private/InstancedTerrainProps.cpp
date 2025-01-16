#include "InstancedTerrainProps.h"

FInstancedTerrainProps::FInstancedTerrainProps() {
    this->bCoreGameplay = false;
    this->bServerOnly = false;
    this->bUseRandomSpawn = false;
    this->RandomSpawnDatatable = NULL;
}

