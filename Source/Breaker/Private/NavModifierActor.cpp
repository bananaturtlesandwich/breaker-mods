#include "NavModifierActor.h"
#include "Components/SceneComponent.h"
#include "NavModifierComponent.h"

ANavModifierActor::ANavModifierActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->NavAreaClass = NULL;
    this->RootComp = (USceneComponent*)RootComponent;
    this->NavModifierComponent = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifierComponent"));
}


