#include "PointOfInterestActor.h"
#include "PointOfInterestComponent.h"

APointOfInterestActor::APointOfInterestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPointOfInterestComponent>(TEXT("PointOfInterestComponent"));
    this->PointOfInterestComponent = (UPointOfInterestComponent*)RootComponent;
}


