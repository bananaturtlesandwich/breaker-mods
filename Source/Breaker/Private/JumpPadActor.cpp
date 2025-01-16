#include "JumpPadActor.h"
#include "JumpPadComponent.h"

AJumpPadActor::AJumpPadActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UJumpPadComponent>(TEXT("JumpPadComponent"));
    this->JumpPadComponent = (UJumpPadComponent*)RootComponent;
}


