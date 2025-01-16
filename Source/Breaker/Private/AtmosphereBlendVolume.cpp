#include "AtmosphereBlendVolume.h"

UAtmosphereBlendVolume::UAtmosphereBlendVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlendRadius = 1000.00f;
    this->Priority = 1;
    this->bIsUnbound = false;
    this->bIsEnabled = true;
    this->BlendWeight = 1.00f;
    this->ComputedWeight = 0.00f;
}


