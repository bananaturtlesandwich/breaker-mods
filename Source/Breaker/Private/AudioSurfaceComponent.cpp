#include "AudioSurfaceComponent.h"

UAudioSurfaceComponent::UAudioSurfaceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SurfaceType = SurfaceType4;
}

TEnumAsByte<EPhysicalSurface> UAudioSurfaceComponent::GetSurfaceType() const {
    return SurfaceType_Default;
}


