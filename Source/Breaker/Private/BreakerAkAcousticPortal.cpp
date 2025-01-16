#include "BreakerAkAcousticPortal.h"

ABreakerAkAcousticPortal::ABreakerAkAcousticPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FGameplayTagContainer ABreakerAkAcousticPortal::GetSpatialAudioGameplayTags_Implementation() {
    return FGameplayTagContainer{};
}

bool ABreakerAkAcousticPortal::CanSetLocalPlayerIndoorAudioState_Implementation() {
    return false;
}

bool ABreakerAkAcousticPortal::CanIsolateOverlappingAudioMultiPositions_Implementation() {
    return false;
}


