#include "BreakerAudioGameplayManager.h"

UBreakerAudioGameplayManager::UBreakerAudioGameplayManager() {
    this->CurrentLevel = ELevelState::Uninitialized;
    this->PreviousLevel = ELevelState::Uninitialized;
    this->AudioGlobals = NULL;
    this->BreakerAudioCombatPriorityManagerInstance = NULL;
    this->MultiPositionAmbientAudioPlayerInstance = NULL;
    this->BreakerOceanShorePlayerInstance = NULL;
}

void UBreakerAudioGameplayManager::SetupOnWorldReadyEventBindings() {
}

void UBreakerAudioGameplayManager::SetCurrentLevelAK_State(ELevelState Level) {
}

void UBreakerAudioGameplayManager::OnPlayerRespawnedDuringRun_Internal() {
}

void UBreakerAudioGameplayManager::OnPawnInitialized(ABreakerPawn* BreakerPawn) {
}

void UBreakerAudioGameplayManager::OnGameStateReady() {
}



void UBreakerAudioGameplayManager::OnCycleUpdated_Internal() {
}





void UBreakerAudioGameplayManager::HandleOnTimeOfDayActorRegistered(AActor* TimeOfDayActor) {
}

void UBreakerAudioGameplayManager::HandleOnPlayerPawnExtractionStarted_Implementation() {
}













void UBreakerAudioGameplayManager::HandleLocalPlayerTeleportSucceeded() {
}


void UBreakerAudioGameplayManager::HandleLevelChangeFadeOutEnd_Internal(ELevelState NewLevel, ELevelState OldLevel) {
}




void UBreakerAudioGameplayManager::HandleLevelChangeFadeInBegin_Internal(ELevelState NewLevel, ELevelState OldLevel, float FadeLength) {
}


void UBreakerAudioGameplayManager::HandleDrownStartedLocalPlayer_Internal() {
}


bool UBreakerAudioGameplayManager::GetListenerPointOfViewPawn(APawn*& PointOfViewPawn) const {
    return false;
}

FGameplayTag UBreakerAudioGameplayManager::GetCurrentPawnBiome() const {
    return FGameplayTag{};
}

UBreakerAudioGlobals* UBreakerAudioGameplayManager::GetAudioGlobals() const {
    return NULL;
}

ABreakerAudioCombatPriorityManager* UBreakerAudioGameplayManager::GetAudioCombatPriorityManager() const {
    return NULL;
}



