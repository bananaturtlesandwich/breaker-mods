#include "BTTask_SpawnActor.h"

UBTTask_SpawnActor::UBTTask_SpawnActor() {
    this->NodeName = TEXT("Breaker_SpawnActor");
    this->SpawnActorClass = NULL;
    this->SpawnAssociatedVFXLoadedInstance = NULL;
    this->MaxSpawnCount = 12;
    this->bSpawnLocationMustProjectToNavMesh = true;
    this->MinSpawnDistanceCmFromOwner = 80.00f;
    this->MaxSpawnDistanceCmFromOwner = 450.00f;
    this->MaxNumSpawnAttempts = 5;
    this->SpawnCooldownDurationSeconds = 8.00f;
    this->DespawnDistance = 20000.00f;
}


