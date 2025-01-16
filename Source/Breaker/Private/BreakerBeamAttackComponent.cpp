#include "BreakerBeamAttackComponent.h"
#include "Net/UnrealNetwork.h"

UBreakerBeamAttackComponent::UBreakerBeamAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LaserRange = 3000.00f;
    this->TunnelCollisionCheckThreshold = 0.05f;
    this->TunnelCollisionCheckIncrements = 3;
    this->LaserAttackBlendFactorCurveName = TEXT("LaserAttackBlendFactor");
    this->LaserActiveCurveName = TEXT("LaserActive");
    this->LaserAttackProgressCurveName = TEXT("LaserAttackProgress");
    this->LaserActiveCurveThreshold = 0.90f;
    this->MinBeamAngle = -90.00f;
    this->MaxBeamAngle = 30.00f;
    this->BeamSpeedModifier = 1.00f;
    this->BeamLerpMultiplier = 2.00f;
    this->LaserRotationAxisPitch = -85.00f;
    this->bBeamHasInitialDirection = true;
    this->bBeamDirectionIgnoresTarget = false;
    this->bUpdateAimOffsets = false;
    this->bTrackChoreographyTarget = false;
    this->TargetTrackingRate = 100.00f;
    this->CurrentState = EBeamAttackState::Inactive;
    this->DamageFingerprint = -1;
    this->LaserPitch = -90.00f;
    this->InitialTargetPitch = 0.00f;
    this->bLaserAnimsReady = false;
    this->LasersActive = false;
    this->bLaserIsLethal = false;
    this->bFiring = false;
    this->CurrentBeamBlendStrength = 0.00f;
    this->BeamSourceComponent = NULL;
}

void UBreakerBeamAttackComponent::TriggerLaser(FVector TargetPos) {
}

void UBreakerBeamAttackComponent::SetState(EBeamAttackState NewState, bool bForce) {
}

void UBreakerBeamAttackComponent::SetLasersActive(bool Value) {
}

void UBreakerBeamAttackComponent::OnRep_LasersActive() {
}

FVector UBreakerBeamAttackComponent::GetIdealBeamAttackDirection(float ALPHA) const {
    return FVector{};
}

void UBreakerBeamAttackComponent::GetBeamProperties(FVector& OutBeamStart, FVector& OutBeamDirection, float& OutBeamRange) const {
}

void UBreakerBeamAttackComponent::ClearTarget() {
}

void UBreakerBeamAttackComponent::AssignTarget(FVector NewTarget) {
}

void UBreakerBeamAttackComponent::AssignBeamSource(USceneComponent* BeamSource, FName Socket) {
}

bool UBreakerBeamAttackComponent::AreLasersActive() const {
    return false;
}

void UBreakerBeamAttackComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBreakerBeamAttackComponent, LaserRotationAxisPitch);
    DOREPLIFETIME(UBreakerBeamAttackComponent, LaserPitch);
    DOREPLIFETIME(UBreakerBeamAttackComponent, bLaserAnimsReady);
    DOREPLIFETIME(UBreakerBeamAttackComponent, LasersActive);
    DOREPLIFETIME(UBreakerBeamAttackComponent, bLaserIsLethal);
}


