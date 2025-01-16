#include "NavModifierVolumeComponent.h"
#include "Templates/SubclassOf.h"

UNavModifierVolumeComponent::UNavModifierVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDynamicObstacle = true;
}

void UNavModifierVolumeComponent::SetAreaClass(TSubclassOf<UNavArea> NewAreaClass) {
}

TSubclassOf<UNavArea> UNavModifierVolumeComponent::GetAreaClass() const {
    return NULL;
}


