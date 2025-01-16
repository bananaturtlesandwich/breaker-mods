#include "AtmosphereBlender.h"

AAtmosphereBlender::AAtmosphereBlender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManager = NULL;
}

void AAtmosphereBlender::RegisterAtmosphereBlendVolumes() {
}

FVector AAtmosphereBlender::GetGameViewLocation() {
    return FVector{};
}

FVector AAtmosphereBlender::GetGameOrEditorViewLocation(UObject* WorldContextObject) {
    return FVector{};
}


