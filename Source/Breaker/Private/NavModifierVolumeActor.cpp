#include "NavModifierVolumeActor.h"
#include "NavModifierVolumeComponent.h"

ANavModifierVolumeActor::ANavModifierVolumeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UNavModifierVolumeComponent>(TEXT("NavModifierVolumeComponent"));
    this->NavModifierVolumeComponent = (UNavModifierVolumeComponent*)RootComponent;
}


