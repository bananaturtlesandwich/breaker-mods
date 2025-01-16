#include "MovementDash.h"

UMovementDash::UMovementDash(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PerfectDodgeEffectForPlayer = NULL;
    this->PerfectDodgeEffectForEnemies = NULL;
    this->MaxDistanceForGroundToWallTransition = 150.00f;
    this->MaxDistanceForAirToWallTransition = 1500.00f;
    this->MaxAngleToConvertToWallDash = 30.00f;
    this->WallDashAirHangDuration = 0.35f;
    this->DashRecoveryInProgress = false;
    this->DashRecoverySpeed = 250.00f;
    this->DashRecoveryMontagePlayRate = 2.00f;
    this->DashRecoveryMontageBlendOut = 0.10f;
    this->DashRecoveryTime = 0.15f;
    this->DashRecoveryMontage = NULL;
    this->DefaultDashProps = NULL;
    this->CollisionBufferDistance = 1.00f;
    this->DamageRadiusMultiplier = 2.00f;
    this->bCanPerfectDodge = true;
    this->bCanPerfectDodgeInAir = false;
    this->PerfectDodgeForwardDistanceCheck = 300.00f;
    this->PerfectDodgeRadiusCheck = 400.00f;
    this->PerfectDodgeTimingBuffer = 0.15f;
    this->PerfectDodgeProjectileDistanceOffset = 225.00f;
    this->PerfectDodgeProjectileAngleThreshold = 90.00f;
    this->PerfectDodgeProjectileLookAheadSimulationSteps = 7;
    this->bAffectNonThreatAggroEnemies = true;
    this->NonThreatDistanceThreshold = 600.00f;
    this->LinkedDashCancelEffectForPlayer = NULL;
    this->WeakDashCancelMovementModifier = 0.70f;
    this->NormalDashMontage = NULL;
    this->VerticalDashMontage = NULL;
}

void UMovementDash::ResetActiveDashProperties() {
}

void UMovementDash::RemoveChainCountMod(int32 RemoveCount) {
}

void UMovementDash::OverrideActiveDashProperties(const FDashProperties& NewDashProperties) {
}

bool UMovementDash::IsWallDash() const {
    return false;
}

int32 UMovementDash::GetTotalDashChainLimit() const {
    return 0;
}

int32 UMovementDash::GetCurrentDashChainCount() const {
    return 0;
}

void UMovementDash::AddChainCountMod(int32 AddCount) {
}


