#include "MovementGroundPound.h"

UMovementGroundPound::UMovementGroundPound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialWaitRatio = 0.00f;
    this->FinalWaitRatio = 0.00f;
    this->ExitVelocity = 0.00f;
    this->MaxDistance = 10000.00f;
    this->OverrideCrossfadeDuration = 0.00f;
    this->FallbackDuration = 1.00f;
    this->RiseHeight = 100.00f;
    this->RiseAccel = 1000.00f;
    this->Anim = NULL;
}

ABreakerPawn* UMovementGroundPound::GetCharacterPawn() const {
    return NULL;
}


