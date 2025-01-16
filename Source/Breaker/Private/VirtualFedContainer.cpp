#include "VirtualFedContainer.h"
#include "Components/SceneComponent.h"

AVirtualFedContainer::AVirtualFedContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
}


