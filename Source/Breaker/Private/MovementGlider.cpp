#include "MovementGlider.h"

UMovementGlider::UMovementGlider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGlidingMovementEnabled = true;
    this->MaxForwardTilt = 0.26f;
    this->TiltMultiplier = 0.90f;
    this->MaxSideTilt = 0.52f;
    this->EnergyConservation = 1.00f;
    this->ForwardSpeed = 2500.00f;
    this->TravelModeSpeed = 2500.00f;
    this->TargetFallSpeed = -700.00f;
    this->MaxFallSpeed = -2000.00f;
    this->MinHeightOffGround = 250.00f;
    this->FallDrag = 1.40f;
    this->ForwardDrag = 3.00f;
    this->GroundDistanceToStop = 90.00f;
    this->MaxTurnDegrees = 127.00f;
    this->WarmUpSeconds = 0.20f;
    this->GliderEngageDelay = 0.20f;
    this->bGlideUsed = false;
    this->bAttemptingGlide = false;
    this->RedeployDuration = 0.50f;
    this->Redeploying = false;
    this->Pawn = NULL;
}

void UMovementGlider::SetGliderEnabled(bool bIsEnabled) {
}

void UMovementGlider::ResetStaminaModifier() {
}

float UMovementGlider::RedeployRemainingRatio() const {
    return 0.0f;
}

float UMovementGlider::GlideChargeRemainingRatio() const {
    return 0.0f;
}

float UMovementGlider::GlideChargeRemaining() const {
    return 0.0f;
}

float UMovementGlider::GlideChargeMax() const {
    return 0.0f;
}

bool UMovementGlider::CanGlide() const {
    return false;
}


