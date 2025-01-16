#include "BreakerMusicManager.h"

UBreakerMusicManager::UBreakerMusicManager() {
    this->MusicGlobals = NULL;
    this->CurrentLevel = ELevelState::Uninitialized;
    this->PreviousLevel = ELevelState::Uninitialized;
    this->ActiveMusicPackage = NULL;
    this->bEnableHandleNewEnteredBiome = false;
    this->bIsBiomeLongFormMusicActive = false;
}


void UBreakerMusicManager::UpdateActiveMusicGameplayTags(FGameplayTagContainer NewGamePlayTags, bool bResetActiveTags) {
}

bool UBreakerMusicManager::StopMusicBus() {
    return false;
}

void UBreakerMusicManager::StopActiveMusicPackage(bool bClearCache) {
}


void UBreakerMusicManager::SetLongFormMusicEventTimer() {
}

void UBreakerMusicManager::SetEnableHandleNewEnteredBiome(const bool bEnable) {
}

void UBreakerMusicManager::PlaySpectateMusic() {
}

void UBreakerMusicManager::PlayMusicPackage(UBreakerMusicPackage* MusicPackage) {
}

void UBreakerMusicManager::PlayLongFormLayerMusicEvent() {
}

void UBreakerMusicManager::OnPlayerRespawnedDuringRun_Internal() {
}

void UBreakerMusicManager::OnPawnInitialized(ABreakerPawn* BreakerPawn) {
}


bool UBreakerMusicManager::IsLocalPlayerInRangeForLongFormMusic(const UBreakerMusicPackage* MusicPackage) const {
    return false;
}

bool UBreakerMusicManager::IsBiomeLongFormMusicActive() const {
    return false;
}

void UBreakerMusicManager::HandleOnReadyUpComponentCancelEvent_Internal() {
}

void UBreakerMusicManager::HandleOnReadyUpComponentBeginCountdown_Internal(int32 Countdown) {
}

void UBreakerMusicManager::HandleOnReadyUpComponentActivateEvent_Internal(FText StringInfo, int32 IntInfo) {
}





void UBreakerMusicManager::HandleOnLongFormMusicSyncExit() {
}


void UBreakerMusicManager::HandleOnGameplayWorldReady() {
}

void UBreakerMusicManager::HandleOnExtractionWaveSpawned_Internal() {
}


void UBreakerMusicManager::HandleOnEnemyDefeated(FBreakerAttackReport AttackInfo) {
}


void UBreakerMusicManager::HandleOnBossReady_Internal(ACMCharBase* Boss) {
}



void UBreakerMusicManager::HandleNewBiomeEntered_Internal(FGameplayTag OldBiome, FGameplayTag NewBiome) {
}






void UBreakerMusicManager::HandleGameStateReady(UWorld* World) {
}

APawn* UBreakerMusicManager::GetLocalPlayerPawn() const {
    return NULL;
}

AGameStateBase* UBreakerMusicManager::GetGameState() const {
    return NULL;
}

FGameplayTag UBreakerMusicManager::GetCurrentPawnBiome() const {
    return FGameplayTag{};
}

void UBreakerMusicManager::EnableMusic3D_Positioning(const bool bEnable, const FVector position, const FRotator Rotator) {
}



