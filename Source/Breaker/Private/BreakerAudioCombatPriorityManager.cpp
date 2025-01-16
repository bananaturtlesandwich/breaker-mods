#include "BreakerAudioCombatPriorityManager.h"

ABreakerAudioCombatPriorityManager::ABreakerAudioCombatPriorityManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CombatIntensityRTPC = NULL;
    this->DebugLoggingOutputPauseDurationSeconds = 1.00f;
    this->DebugLoggingLastOutputTimeStampSeconds = 0.00f;
}

void ABreakerAudioCombatPriorityManager::UpdateAudioRelevantCombatants() {
}

void ABreakerAudioCombatPriorityManager::SortCachedAllCombatantPropertiesByIntermediateScore() {
}

void ABreakerAudioCombatPriorityManager::SetAudioCombatRank(AActor* Actor, const float NewRank) {
}

void ABreakerAudioCombatPriorityManager::SetAudioCombatManagerActive(bool bActive) {
}

void ABreakerAudioCombatPriorityManager::ResetCachedAudioProperties() {
}


TArray<FDigestedAudioProperties> ABreakerAudioCombatPriorityManager::GetCachedAllCombatantProperties() {
    return TArray<FDigestedAudioProperties>();
}

bool ABreakerAudioCombatPriorityManager::GetAudioRelevantCombatantsWithinDistance(TArray<UChoreographyComponent*>& out_AudioRelevantCombatants, const float distanceThresholdCm, bool bShouldClearOutputArrayPreQuery) {
    return false;
}

bool ABreakerAudioCombatPriorityManager::GetAudioCombatantsTargetingPointOfViewPawn(TArray<UChoreographyComponent*>& out_AudioRelevantCombatants, bool bShouldClearOutputArrayPreQuery) {
    return false;
}

bool ABreakerAudioCombatPriorityManager::GetAudioCombatantCachedPropertiesFromChoreographyComp(const UChoreographyComponent* choreographyCompToCheck, FDigestedAudioProperties& out_CombatantDigestedProperties) {
    return false;
}

bool ABreakerAudioCombatPriorityManager::GetAudioCombatantCachedProperties(const AActor* actorToCheck, FDigestedAudioProperties& out_CombatantDigestedProperties) {
    return false;
}

bool ABreakerAudioCombatPriorityManager::GetAllAudioRelevantCombatants(TArray<UChoreographyComponent*>& out_AudioRelevantCombatants) {
    return false;
}

void ABreakerAudioCombatPriorityManager::DebugOutputDistanceRelevantAudioCombatants(const TArray<UChoreographyComponent*>& out_AudioRelevantCombatants, const float distanceThresholdCm, bool bShouldClearOutputArrayPreQuery) const {
}

FDigestedAudioProperties ABreakerAudioCombatPriorityManager::CreateDefaultCachedCombatantPropertiesEntry(const UChoreographyComponent* inCombatant) {
    return FDigestedAudioProperties{};
}

void ABreakerAudioCombatPriorityManager::CacheListenerPointOfViewPawn(const APawn* NewPointOfViewPawn) {
}

bool ABreakerAudioCombatPriorityManager::AddDefaultCachedCombatantPropertiesEntry(FDigestedAudioProperties& cachedCombatantPropertiesToAdd) {
    return false;
}


