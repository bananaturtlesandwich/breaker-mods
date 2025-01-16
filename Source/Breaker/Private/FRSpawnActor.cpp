#include "FRSpawnActor.h"

UFRSpawnActor::UFRSpawnActor() {
    this->SpawnMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    this->bSetOwner = false;
    this->bSetLevelFromTarget = true;
    this->bSetInstigator = true;
    this->bSnapActorToGround = true;
    this->bSpawnOnNavigableSurface = false;
    this->NavigableSpawnRadius = 100.00f;
}


