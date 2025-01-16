#include "BreakerLeaperComponent.h"
#include "Net/UnrealNetwork.h"

UBreakerLeaperComponent::UBreakerLeaperComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetIndicatorClass = NULL;
    this->LeapToTargetIsFreeOfCollision = false;
    this->DebugDraw = false;
    this->LeapTestHeight = 100.00f;
    this->LeapTestRadius = 75.00f;
    this->TargetIndicator = NULL;
    this->StopRotationPostAttackTimeDurationSeconds = 0.10f;
}

bool UBreakerLeaperComponent::StartLeap(UAnimMontage* Anim, FVector TargetPosition, float MidPointHeight, float JumpDuration, float MaximumAllowedError) {
    return false;
}

void UBreakerLeaperComponent::SetLeapTargetLocation(const FVector& Location) {
}

void UBreakerLeaperComponent::OnDisabled() {
}

void UBreakerLeaperComponent::Multicast_StartLeap_Implementation(UAnimMontage* Anim, FVector TargetPosition, float Duration) {
}

void UBreakerLeaperComponent::Multicast_FinishLeap_Implementation() {
}

bool UBreakerLeaperComponent::IsLeapInProgress() const {
    return false;
}

bool UBreakerLeaperComponent::IsLeapActive() const {
    return false;
}

FVector UBreakerLeaperComponent::GetLeapTargetLocation() const {
    return FVector{};
}

void UBreakerLeaperComponent::FinishLeap() {
}

void UBreakerLeaperComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBreakerLeaperComponent, JumpTargetPosition);
}


