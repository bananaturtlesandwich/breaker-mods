#include "InteractableLocatorActor.h"
#include "InteractableLocatorComponent.h"

AInteractableLocatorActor::AInteractableLocatorActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractableSet = NULL;
    this->Locator = CreateDefaultSubobject<UInteractableLocatorComponent>(TEXT("LocatorComponent"));
}


