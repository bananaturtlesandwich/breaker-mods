#include "PlayerAudioComponent.h"

UPlayerAudioComponent::UPlayerAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RelevantEliteBeacon = NULL;
    this->bIsInsideEliteZone = false;
    this->bIsOwnerPointOfViewPawn = false;
    this->EliteBeaconAudioTag = TEXT("Audio.EliteBossUnlock");
    this->DistanceToNearestBiomeRTPC = NULL;
    this->DistanceToExtractionZoneRTPC = NULL;
    this->DistanceToMiniBossRTPC = NULL;
    this->DistanceToEliteRTPC = NULL;
    this->ExtractionProgressRTPC = NULL;
    this->SpeedNormalizedRTPC = NULL;
    this->CachedNormalizedVelocity = 0.00f;
    this->CachedMaxSpeed = 0.00f;
}







void UPlayerAudioComponent::OnMovementModeChanged_Internal(ABreakerPawn* Owner, TScriptInterface<IBreakerMovementDelegate> PreviousState, TScriptInterface<IBreakerMovementDelegate> CurrentState) {
}


void UPlayerAudioComponent::OnListenerPointOfViewPawnChanged(APawn* Pawn) {
}

















float UPlayerAudioComponent::GetDistanceToNearestBiome() const {
    return 0.0f;
}

float UPlayerAudioComponent::GetCharacterNormalizedSpeed_Implementation() {
    return 0.0f;
}


