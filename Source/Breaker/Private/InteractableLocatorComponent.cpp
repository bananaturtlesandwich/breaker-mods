#include "InteractableLocatorComponent.h"

UInteractableLocatorComponent::UInteractableLocatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractableSet = NULL;
    this->bIsOnValidFabComponent = true;
    this->Priority = 2;
}


