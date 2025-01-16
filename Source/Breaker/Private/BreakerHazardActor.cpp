#include "BreakerHazardActor.h"
#include "BreakerHazardComponent.h"

ABreakerHazardActor::ABreakerHazardActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBreakerHazardComponent>(TEXT("HazardComponent"));
    this->HazardComponent = (UBreakerHazardComponent*)RootComponent;
}


