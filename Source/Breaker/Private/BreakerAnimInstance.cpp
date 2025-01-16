#include "BreakerAnimInstance.h"
#include "Templates/SubclassOf.h"

UBreakerAnimInstance::UBreakerAnimInstance() {
    this->SteeringSpeedMax = 2.50f;
    this->NormalizedSprintSkidThresholdLo = 0.00f;
    this->NormalizedSprintSkidThresholdHi = 0.25f;
    this->MinSprintSkidTime = 0.25f;
    this->JumpWindowSeconds = 0.10f;
    this->HorizontalMoveThresholdLo = 5.00f;
    this->HorizontalMoveThresholdHi = 10.00f;
    this->DefaultAimingInterpSpeed = 50;
    this->AimingYawOffset = 0.00f;
    this->StationarySpeedThresholdLo = 5.00f;
    this->StationarySpeedThresholdHi = 10.00f;
    this->bGrounded = true;
    this->bTeleportedOrGrounded = false;
    this->bHasBoundMovement = false;
    this->bSprinting = false;
    this->bDashing = false;
    this->TurnSpeedRequiredForWalkAnim = 5.00f;
    this->WalkSpeedUsedToSimulateTurning = 200.00f;
    this->bHoverboarding = false;
    this->bHoverboard_Boosting = false;
    this->bHoverboard_Sliding = false;
    this->bHoverboard_Crouching = false;
    this->bHoverboard_GroundedOrSkimmingWater = false;
    this->bGliding = false;
    this->bStopping = false;
    this->bPerformingTrick = false;
    this->bAscending = false;
    this->bDescending = false;
    this->bIsDowned = false;
    this->bSwimming = false;
    this->ActiveJumps = 0;
    this->bWallDashing = false;
    this->bNotDashingAndGrounded = false;
    this->bNotDashingAndNotGrounded = false;
    this->bGroundedAndStopping = false;
    this->bNotStoppingAndNotStationary = false;
    this->bHasWallContact = false;
    this->bStrafing = false;
    this->bAiming = false;
    this->AimingBlend = 0.00f;
    this->AimPitch = 0.00f;
    this->AimYaw = 0.00f;
    this->bHasLookTarget = false;
    this->bSprintSkidDetected = false;
    this->bHorizontalMovementDetected = false;
    this->AngularVelocity = 0.00f;
    this->bTurning = false;
    this->VerticalSpeed = 0.00f;
    this->HorizontalSpeed = 0.00f;
    this->NormalizedSteeringSpeed = 0.00f;
    this->NormalizedWalkSpeed = 0.00f;
    this->NormalizedJogSpeed = 0.00f;
    this->NormalizedSprintSpeed = 0.00f;
    this->TiltVelToAngle = 0.03f;
    this->TiltOffsetHeight = 100.00f;
    this->TiltLagSeconds = 0.20f;
    this->TiltUnderdampening = 0.35f;
    this->bUpdateForDataTableGearAnimLayerLinking = false;
    this->CurrentAnimLinkTable = NULL;
    this->LastUsedGearForWeaponStance_Class = NULL;
    this->WeaponStancesAnimBP_ClassToUse = NULL;
    this->LastLinkedWeaponStancesAnimBP_ClassToUse = NULL;
    this->LastAimingWeapon = NULL;
}

void UBreakerAnimInstance::UnlinkAnimClassLayersExt(USkeletalMeshComponent* Mesh, TSubclassOf<UAnimInstance> LinkedAnimationClass, EAnimUnlinkCondition Condition, float Timeout) {
}

void UBreakerAnimInstance::SetAnimNotifyStateDataForSequenceAndClass(UAnimSequenceBase* Sequence, TSubclassOf<UAnimNotifyState> NotifyStateClass, FAnimNotifyStateInstanceData InstanceData) {
}

USkeletalMeshComponent* UBreakerAnimInstance::GetTargetSkeletalMeshComponent() const {
    return NULL;
}

USkeletalMesh* UBreakerAnimInstance::GetTargetSkeletalMesh() const {
    return NULL;
}

bool UBreakerAnimInstance::GetAnimNotifyStateDataForInstance(UAnimSequenceBase* Sequence, const UAnimNotifyState* NotifyState, FAnimNotifyStateInstanceData& OutInstanceData) const {
    return false;
}

void UBreakerAnimInstance::ForwardOnMontageNotifyEnd(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

void UBreakerAnimInstance::ForwardOnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

void UBreakerAnimInstance::ForceFlushUnlinks() {
}


