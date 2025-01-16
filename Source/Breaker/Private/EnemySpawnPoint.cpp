#include "EnemySpawnPoint.h"
#include "Templates/SubclassOf.h"

AEnemySpawnPoint::AEnemySpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnState = EEnemySpawnState::Hidden;
    this->SpawnedEnemy = NULL;
    this->VerticalSpawnLocationSafetyMargin = 50.00f;
    this->InsideSafeSpace = false;
}

void AEnemySpawnPoint::SetSpawnState(EEnemySpawnState NewSpawnState) {
}


AEnemySpawnPoint* AEnemySpawnPoint::GetSpawnPointWithinRange(UObject* WorldContextObject, FVector Origin, float MinRange, float MaxRange) {
    return NULL;
}

TSubclassOf<ACMCharBase> AEnemySpawnPoint::GetSpawnClassForDifficulty(int32 Difficulty) {
    return NULL;
}

TSubclassOf<ACMCharBase> AEnemySpawnPoint::GetSpawnClassForCurrentDifficulty() {
    return NULL;
}

AEnemySpawnPoint* AEnemySpawnPoint::GetNearestSpawnPoint(UObject* WorldContextObject, FVector Origin, float MinRange) {
    return NULL;
}



FString AEnemySpawnPoint::DebugDescribeCalendar() {
    return TEXT("");
}


