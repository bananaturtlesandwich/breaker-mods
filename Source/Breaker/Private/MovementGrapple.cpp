#include "MovementGrapple.h"

UMovementGrapple::UMovementGrapple(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialWaitRatio = 0.00f;
    this->FinalWaitRatio = 0.00f;
    this->ExitVelocity = 0.00f;
    this->MaxDistance = 10000.00f;
    this->OverrideCrossfadeDuration = 0.00f;
    this->FallbackDuration = 1.00f;
    this->Anim = NULL;
}

ABreakerPawn* UMovementGrapple::GetCharacterPawn() const {
    return NULL;
}


