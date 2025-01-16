#include "EnemySpawnManager.h"

UEnemySpawnManager::UEnemySpawnManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyKillCount = 0;
    this->CurrentStageInfo = NULL;
    this->ActiveBossHandle = 0;
}

void UEnemySpawnManager::UnregisterSpawnPoint(AEnemySpawnPoint* SpawnPoint) {
}

void UEnemySpawnManager::UnregisterSpawnGroup(AEnemyGroupSpawner* GroupSpawner) {
}

void UEnemySpawnManager::UnregisterActiveBoss() {
}

void UEnemySpawnManager::SetEnemyDifficulty(ACMCharBase* Enemy, float DifficultyLevel, bool bReset) {
}

void UEnemySpawnManager::SetCurrentDayForScaling(int32 NewDayCount, float CurrentTimeOfDay, bool bWriteToScreen) {
}

bool UEnemySpawnManager::ScaleActorAttributesUsingDifficultyInfo(AActor* Actor, float DifficultyLevel) {
    return false;
}

bool UEnemySpawnManager::ScaleActorAttributesUsForMultiplePlayers(AActor* Actor) {
    return false;
}

void UEnemySpawnManager::Reset() {
}

void UEnemySpawnManager::RemoveActorHandleFromGroupID(int32 group_id, int32 actor_handle) {
}

void UEnemySpawnManager::RegisterSpawnPoint(AEnemySpawnPoint* SpawnPoint) {
}

void UEnemySpawnManager::RegisterSpawnGroup(AEnemyGroupSpawner* GroupSpawner) {
}

void UEnemySpawnManager::RegisterActiveBoss(ACMCharBase* Boss) {
}

int32 UEnemySpawnManager::NumActiveActorsInGroup(int32 group_id) {
    return 0;
}

bool UEnemySpawnManager::IsInitialized() const {
    return false;
}

void UEnemySpawnManager::Initialize(UBreakerStageInfo* InStageInfo) {
}

bool UEnemySpawnManager::GetRandomEnemyInfo(FGameplayTag BiomeTag, FGameplayTag ZoneTag, FGameplayTagQuery Preference, FEnemyDetails& OutDetails) {
    return false;
}

ACMCharBase* UEnemySpawnManager::GetActiveBoss() {
    return NULL;
}

UEnemySpawnManager* UEnemySpawnManager::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UEnemySpawnManager::AssignGroupSpawns() {
}

void UEnemySpawnManager::AddActorHandleToGroupID(int32 group_id, int32 actor_handle) {
}


