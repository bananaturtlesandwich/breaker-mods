#include "BreakerAkSpatialAudioVolume.h"

ABreakerAkSpatialAudioVolume::ABreakerAkSpatialAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSetLocalPlayerIndoorAudioState = false;
    this->bIsolateOverlappingAudioMultiPositions = false;
}

FGameplayTagContainer ABreakerAkSpatialAudioVolume::GetSpatialAudioGameplayTags_Implementation() {
    return FGameplayTagContainer{};
}

bool ABreakerAkSpatialAudioVolume::CanSetLocalPlayerIndoorAudioState_Implementation() {
    return false;
}

bool ABreakerAkSpatialAudioVolume::CanIsolateOverlappingAudioMultiPositions_Implementation() {
    return false;
}


