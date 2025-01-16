#include "BreakerHazardVolumeActor.h"
#include "BreakerHazardVolume.h"

ABreakerHazardVolumeActor::ABreakerHazardVolumeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBreakerHazardVolume>(TEXT("HazardComponent"));
    this->HazardVolume = (UBreakerHazardVolume*)RootComponent;
}


