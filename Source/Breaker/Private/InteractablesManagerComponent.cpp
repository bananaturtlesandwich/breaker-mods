#include "InteractablesManagerComponent.h"

UInteractablesManagerComponent::UInteractablesManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAuditMode = false;
    this->InteractableRules = NULL;
    this->Decker = NULL;
}

void UInteractablesManagerComponent::DeckInteractables() {
}


