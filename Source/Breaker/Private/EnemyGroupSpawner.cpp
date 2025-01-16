#include "EnemyGroupSpawner.h"

AEnemyGroupSpawner::AEnemyGroupSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRegisterWithSpawnManager = true;
}


void AEnemyGroupSpawner::SetIsLabSpawner(const bool bInIsLabZone) {
}

void AEnemyGroupSpawner::SetIsInteriorSpawner(const bool bInIsInteriorZone) {
}

bool AEnemyGroupSpawner::IsLabSpawner() const {
    return false;
}

bool AEnemyGroupSpawner::IsInteriorSpawner() const {
    return false;
}

bool AEnemyGroupSpawner::IsExteriorSpawner() const {
    return false;
}


