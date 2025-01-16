#include "LockedDoorComponent.h"

ULockedDoorComponent::ULockedDoorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractionRadius = 1.00f;
    this->ChargeDuration = 0.50f;
    this->WidgetClass = NULL;
    this->bEnableInteraction = true;
    this->bOpenAllDoorsOnThisActor = false;
    this->bCloseAllDoorsOnThisActor = false;
}

void ULockedDoorComponent::StateSet(AActor* Pawn, bool IsServer, bool bInteracted) {
}

void ULockedDoorComponent::SetCost(FCurrencyCostMap NewCost) {
}

void ULockedDoorComponent::OpenDoor(ABreakerPawn* Pawn) {
}

void ULockedDoorComponent::InternalOpenDoor(AActor* Pawn, bool IsServer) {
}

void ULockedDoorComponent::DoorOpened_Implementation() {
}

void ULockedDoorComponent::DoorClosed_Implementation() {
}

void ULockedDoorComponent::CloseDoor(ABreakerPawn* Pawn) {
}


