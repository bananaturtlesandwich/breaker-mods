#include "BreakerStateMachineComponent.h"
#include "Net/UnrealNetwork.h"

UBreakerStateMachineComponent::UBreakerStateMachineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UBreakerStateMachineComponent::TryTransitionStatus(FName FromStatus, FName ToStatus) {
    return false;
}

bool UBreakerStateMachineComponent::TrySetStatus(FName NewStatus) {
    return false;
}

float UBreakerStateMachineComponent::StatusTimeElapsed() const {
    return 0.0f;
}

void UBreakerStateMachineComponent::SetStatus_Server_Implementation(FName Name) {
}

void UBreakerStateMachineComponent::OnRep_Status() {
}

bool UBreakerStateMachineComponent::IsCurrent(FName Name) const {
    return false;
}

FName UBreakerStateMachineComponent::GetStatus() const {
    return NAME_None;
}

void UBreakerStateMachineComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBreakerStateMachineComponent, Status);
}


