#include "BreakerQuestManager.h"

UBreakerQuestManager::UBreakerQuestManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumberAvailableRequiredQuests = 3;
    this->MaxRequiredMissionsIncreasedAtRunCycle = 8;
    this->MaxNumberRequiredQuests = 1;
    this->OwningPawn = NULL;
    this->bDisableQuests = false;
}

void UBreakerQuestManager::OnEnemyKilled(FBreakerAttackReport AttackInfo) {
}

bool UBreakerQuestManager::HasAcceptedAllRequiredQuests() {
    return false;
}

void UBreakerQuestManager::HandleLevelStreamingComplete(const ELevelState NewLevel, const ELevelState OldLevel) {
}

void UBreakerQuestManager::HandleCycleIndexChanged() {
}

TArray<FGameplayTag> UBreakerQuestManager::GetCurrentRequiredQuestTags() const {
    return TArray<FGameplayTag>();
}

int32 UBreakerQuestManager::GetCurrentRequiredQuestAttemptsRemainingForQuest(FGameplayTag RequiredQuestTag) const {
    return 0;
}

TArray<FQuestInfo> UBreakerQuestManager::GetAvailableRequiredQuests() const {
    return TArray<FQuestInfo>();
}

void UBreakerQuestManager::Debug_SetMaxNumberRequiredQuests(const int32 NewMaxNumberRequiredQuests) {
}

void UBreakerQuestManager::AwardRequiredQuestRewards(FGameplayTag RequiredQuestTag, FVector Location) {
}

bool UBreakerQuestManager::AcceptRequiredQuest(FGameplayTag RequiredQuestTag) {
    return false;
}


