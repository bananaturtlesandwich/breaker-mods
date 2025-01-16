#include "BreakerInteractorComponent.h"

UBreakerInteractorComponent::UBreakerInteractorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractionRange = 300.00f;
}

void UBreakerInteractorComponent::TryBeginInteracting() {
}

void UBreakerInteractorComponent::Server_SetInteractableStateAtLocation_Implementation(FVector Location, bool bInteracted) {
}

void UBreakerInteractorComponent::Server_SetInteractableCostAtLocation_Implementation(FVector Location, FCurrencyCostArrays CostArrays) {
}

UBreakerInteractableComponent* UBreakerInteractorComponent::NearestInteractable() const {
    return NULL;
}

void UBreakerInteractorComponent::Multicast_SetInteractableStateAtLocation_Implementation(FVector Location, bool bInteracted) {
}

void UBreakerInteractorComponent::Multicast_SetInteractableCostAtLocation_Implementation(FVector Location, FCurrencyCostArrays CostArrays) {
}

void UBreakerInteractorComponent::Interact_Server_Implementation(UBreakerInteractableComponent* ClientCurrentInteractible) {
}

void UBreakerInteractorComponent::Interact_Multicast_Implementation(UBreakerInteractableComponent* ClientCurrentInteractible) {
}

bool UBreakerInteractorComponent::HasNearbyInteractable() const {
    return false;
}

void UBreakerInteractorComponent::EndInteracting() {
}

bool UBreakerInteractorComponent::CanAffordNearbyInteractable() const {
    return false;
}


