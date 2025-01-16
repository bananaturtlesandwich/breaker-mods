#include "LeaperAudioComponent.h"

ULeaperAudioComponent::ULeaperAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsLeaping = false;
    this->bIsPlayingThreatIndicatorSFX = false;
    this->bIsAboutToLandVoicePlaying = false;
    this->CurrentLeapDuration = 0.00f;
    this->RemainingLeapDuration = 0.00f;
    this->JumpDurationNormalizedRTPC = NULL;
    this->JumpTargetDistanceToLocalPlayerRTPC = NULL;
    this->LeapPositionForAboutToLandVoiceNormalized = 0.40f;
    this->MainAkComponent = NULL;
    this->VoiceAkComponent = NULL;
    this->TurbulencePlayingInstanceID = 0;
}

void ULeaperAudioComponent::Initialize(ACMCharBase* Actor) {
}

void ULeaperAudioComponent::HandleOnLeaperStartLeap(FVector TargetPosition, float LeapDuration) {
}

void ULeaperAudioComponent::HandleOnLeaperEndLeap() {
}


