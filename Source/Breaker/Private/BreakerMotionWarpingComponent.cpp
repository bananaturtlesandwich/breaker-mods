#include "BreakerMotionWarpingComponent.h"
#include "Net/UnrealNetwork.h"

UBreakerMotionWarpingComponent::UBreakerMotionWarpingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UBreakerMotionWarpingComponent::SetTargetTransform(const FName TargetName, const FTransform& TargetTransform) {
}

void UBreakerMotionWarpingComponent::SetTargetSceneComponent(const FName TargetName, USceneComponent* TargetSceneComponent) {
}

void UBreakerMotionWarpingComponent::SetTargetActor(const FName TargetName, AActor* TargetActor) {
}

void UBreakerMotionWarpingComponent::ClearTarget(const FName Target) {
}

void UBreakerMotionWarpingComponent::ClearAllTargets() {
}

void UBreakerMotionWarpingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBreakerMotionWarpingComponent, Targets);
}


