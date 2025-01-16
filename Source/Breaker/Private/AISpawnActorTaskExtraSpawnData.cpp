#include "AISpawnActorTaskExtraSpawnData.h"

FAISpawnActorTaskExtraSpawnData::FAISpawnActorTaskExtraSpawnData() {
    this->SpawnActorClass = NULL;
    this->bContributesToMaxSpawnCount = false;
    this->bSpawnLocationMustProjectToNavMesh = false;
    this->MinSpawnDistanceCmFromOwner = 0.00f;
    this->MaxSpawnDistanceCmFromOwner = 0.00f;
}

