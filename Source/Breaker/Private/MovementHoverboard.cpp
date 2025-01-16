#include "MovementHoverboard.h"
#include "Net/UnrealNetwork.h"

UMovementHoverboard::UMovementHoverboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseSpeed = 1500.00f;
    this->Thrust = 1.00f;
    this->BoostSpeed = 2600.00f;
    this->WaterStaminaConsumptionMultiplier = 2.00f;
    this->SuspensionDamping = 5.00f;
    this->SuspensionStrength = 222.00f;
    this->WarmupTime = 3.00f;
    this->WarmupAccelDampening = 0.50f;
    this->WarmupTurnDampening = 0.50f;
    this->WarmupTiltback = 15.00f;
    this->RotationDampSecondsMulti = 1.20f;
    this->MaxTurnDegreesSpeed = 220.00f;
    this->TurnStrength = 1.00f;
    this->MaxSlopeAngleChange = 50.00f;
    this->GroundSlop = 60.00f;
    this->GroundHoverHeight = 30.00f;
    this->DownslopeAcceleration = 4500.00f;
    this->MaxSlope = 80.00f;
    this->WallImpactRatio = 0.80f;
    this->JumpForgivenessSeconds = 0.22f;
    this->JumpRepeatTime = 0.40f;
    this->MaxJumpHeight = 390.00f;
    this->MinCrouchSeconds = 0.05f;
    this->RecrouchDelaySeconds = 0.20f;
    this->CrouchDragMultiplier = 0.50f;
    this->CrouchSteeringRadius = 1000.00f;
    this->WaterHoverHeight = 25.00f;
    this->WaterMaxSlope = 200.00f;
    this->WaterTurnStrengthModifier = 1.00f;
    this->WaterDownslopeAcceleration = 4500.00f;
    this->WaterSlop = 60.00f;
    this->WaterSuspensionDamping = 5.00f;
    this->WaterSuspensionStrength = 222.00f;
    this->DismountDepth = 1000.00f;
    this->Gravity = 2700.00f;
    this->GroundSeparationSpeed = 500.00f;
    this->AirResistance = 0.00f;
    this->SlideBoostDelay = 2.00f;
    this->SlideMinSpeed = 100.00f;
    this->MinBoostInterval = 0.50f;
    this->BoostSpeedSlide = 1000.00f;
    this->SlideTractionSeconds = 20.00f;
    this->MinTurnDegrees = 25.00f;
    this->CosAngleDeltaStrength = 0.50f;
    this->JumpPawnUpCoefficient = 0.05f;
    this->StaminaRechargeCoefficient = 1.00f;
    this->StaminaAlmostTimeoutSeconds = 1.50f;
    this->bGroundToWater = false;
    this->bIsTricking = false;
    this->Pawn = NULL;
    this->bWantsBoost = false;
    this->RepStatus = EHoverboardStatus::Normal;
    this->SuspensionOffset = 0.00f;
    this->LockoutTimeAfterDamage = 8.00f;
    this->InCombatTargetRadius = 2400.00f;
    this->EnemyImpactor = NULL;
}

void UMovementHoverboard::SetStatus_Server_Implementation(EHoverboardStatus NewStatus) {
}

void UMovementHoverboard::SetHoverboardEnabled(bool bIsEnabled) {
}

void UMovementHoverboard::SetBoost_Server_Implementation(bool bNewBoost) {
}

void UMovementHoverboard::Server_DoJumpTrick_Implementation() {
}

void UMovementHoverboard::OnRep_Status(EHoverboardStatus PrevStatus) {
}

void UMovementHoverboard::NetMulticast_DoJumpTrick_Implementation() {
}

bool UMovementHoverboard::IsSliding() const {
    return false;
}

bool UMovementHoverboard::IsSkimmingWater() {
    return false;
}

bool UMovementHoverboard::IsCrouching() const {
    return false;
}

bool UMovementHoverboard::IsBoosting() const {
    return false;
}

float UMovementHoverboard::GetWarmupPercentComplete() const {
    return 0.0f;
}

float UMovementHoverboard::GetSyComProgress() const {
    return 0.0f;
}

float UMovementHoverboard::GetStaminaSecondsRemaining() const {
    return 0.0f;
}

float UMovementHoverboard::GetMaxStaminaSeconds() const {
    return 0.0f;
}

ACMCharBase* UMovementHoverboard::GetEnemyImpactor() {
    return NULL;
}

bool UMovementHoverboard::CanHoverboard() const {
    return false;
}

void UMovementHoverboard::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMovementHoverboard, bWantsBoost);
    DOREPLIFETIME(UMovementHoverboard, RepStatus);
}


