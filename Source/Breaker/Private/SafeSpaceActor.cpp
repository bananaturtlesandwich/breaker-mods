#include "SafeSpaceActor.h"
#include "SafeSpace.h"

ASafeSpaceActor::ASafeSpaceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USafeSpace>(TEXT("SafeSpaceComponent"));
    this->SafeSpaceComponent = (USafeSpace*)RootComponent;
}


