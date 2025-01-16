#include "SurfaceInfoComponent.h"

USurfaceInfoComponent::USurfaceInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheckUpdateTimerSeconds = 0.20f;
}

FSurfaceInfo USurfaceInfoComponent::GetCurrentSurface() const {
    return FSurfaceInfo{};
}


