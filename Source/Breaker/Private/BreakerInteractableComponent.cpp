#include "BreakerInteractableComponent.h"

UBreakerInteractableComponent::UBreakerInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNeedsReplication = true;
    this->bIsAutomatic = false;
    this->bRequiresLineOfSight = false;
    this->bShowLockIcon = false;
    this->bStartDisabled = false;
    this->InteractChargeDuration = 0.00f;
}

void UBreakerInteractableComponent::UpdateCost(AActor* OtherPawn, FCurrencyCostArrays NewCost) {
}

void UBreakerInteractableComponent::Unlock() {
}

void UBreakerInteractableComponent::SetPromptWidget(UBreakerInteractPromptWidget* Widget) {
}

void UBreakerInteractableComponent::SetInteractionState(AActor* OtherPawn, bool bInteracted) {
}

void UBreakerInteractableComponent::SetEnabled(bool NewEnabled) {
}

void UBreakerInteractableComponent::ResetLock() {
}

void UBreakerInteractableComponent::OnInteractFocusReceived_Implementation(AActor* OtherPawn) {
}

void UBreakerInteractableComponent::OnInteractFocusLost_Implementation(AActor* OtherPawn) {
}

void UBreakerInteractableComponent::OnInteractChargeTick_Implementation(AActor* OtherPawn, float ChargeRatio) {
}

void UBreakerInteractableComponent::OnInteractChargeStopped_Implementation(AActor* OtherPawn) {
}

void UBreakerInteractableComponent::OnInteractChargeStarted_Implementation(AActor* OtherPawn) {
}

void UBreakerInteractableComponent::OnInteractChargeDepleted_Implementation(AActor* OtherPawn) {
}

void UBreakerInteractableComponent::OnInteractChargeCompleted_Implementation(AActor* OtherPawn) {
}

void UBreakerInteractableComponent::ManuallyUnlock() {
}

void UBreakerInteractableComponent::ManuallyLock() {
}

bool UBreakerInteractableComponent::IsManuallyLocked() {
    return false;
}

bool UBreakerInteractableComponent::IsLocked() {
    return false;
}

bool UBreakerInteractableComponent::IsInteractChargeRequired() const {
    return false;
}

bool UBreakerInteractableComponent::Interact(AActor* OtherPawn) {
    return false;
}

bool UBreakerInteractableComponent::GetEnabled() {
    return false;
}

FCurrencyCostMap UBreakerInteractableComponent::GetActualCost() {
    return FCurrencyCostMap{};
}


