#include "BreakerSentinelComponent.h"
#include "Net/UnrealNetwork.h"

UBreakerSentinelComponent::UBreakerSentinelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShieldsActive = false;
    this->MaxShieldedTargets = 2;
    this->PrimaryShieldRange = 1000.00f;
    this->StickyShieldRange = 2000.00f;
    this->MinimumShieldTargetHeight = 200.00f;
}

void UBreakerSentinelComponent::SetShieldsActive(bool Value) {
}

void UBreakerSentinelComponent::OnRep_OnShieldedTargetsUpdated() {
}

void UBreakerSentinelComponent::OnDestroyed() {
}

bool UBreakerSentinelComponent::HasShieldTarget(const int32 TargetIndex) const {
    return false;
}

bool UBreakerSentinelComponent::HasPotentialAllyToShield() const {
    return false;
}

FVector UBreakerSentinelComponent::GetShieldTargetScale(const int32 TargetIndex) const {
    return FVector{};
}

FVector UBreakerSentinelComponent::GetShieldTargetLocation(const int32 TargetIndex) const {
    return FVector{};
}

AActor* UBreakerSentinelComponent::GetShieldTargetActor(const int32 TargetIndex) const {
    return NULL;
}

bool UBreakerSentinelComponent::AreShieldsActive() const {
    return false;
}

void UBreakerSentinelComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBreakerSentinelComponent, bShieldsActive);
    DOREPLIFETIME(UBreakerSentinelComponent, ShieldedTargets);
}


