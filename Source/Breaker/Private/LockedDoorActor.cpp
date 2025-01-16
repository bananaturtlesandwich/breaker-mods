#include "LockedDoorActor.h"
#include "LockedDoorComponent.h"

ALockedDoorActor::ALockedDoorActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<ULockedDoorComponent>(TEXT("LockedDoorComponent"));
    this->LockedDoorComponent = (ULockedDoorComponent*)RootComponent;
}


