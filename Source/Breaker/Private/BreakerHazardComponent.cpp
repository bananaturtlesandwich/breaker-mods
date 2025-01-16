#include "BreakerHazardComponent.h"

UBreakerHazardComponent::UBreakerHazardComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverrideLocatorSystem = false;
    this->InteractableSet = NULL;
    this->bIsOnValidFabComponent = true;
}


