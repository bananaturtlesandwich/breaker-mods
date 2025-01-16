#include "MovementGrindRail.h"

UMovementGrindRail::UMovementGrindRail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrindSpeed = 2250.00f;
    this->ExponentialAccelerationRate = 0.67f;
    this->TransitionSeconds = 0.20f;
    this->RotationDampSeconds = 0.30f;
}


