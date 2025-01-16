#include "AimingOrbitCameraComponent.h"

UAimingOrbitCameraComponent::UAimingOrbitCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraData = NULL;
}

bool UAimingOrbitCameraComponent::QueryAimingLocation(FVector& OutLocation, FHitResult& OutHit, float QueryDistance) const {
    return false;
}


