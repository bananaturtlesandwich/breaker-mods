#include "BreakerGameModeBase.h"
#include "CombatChoreographer.h"
#include "EnemySpawnManager.h"

ABreakerGameModeBase::ABreakerGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemySpawnManager = CreateDefaultSubobject<UEnemySpawnManager>(TEXT("EnemySpawnManager"));
    this->CombatChoreographer = CreateDefaultSubobject<UCombatChoreographer>(TEXT("CombatChoreographer"));
}

APawn* ABreakerGameModeBase::SpawnDefaultBreakerPawnAtTransform(AController* NewPlayer, const FTransform& SpawnTransform) {
    return NULL;
}


