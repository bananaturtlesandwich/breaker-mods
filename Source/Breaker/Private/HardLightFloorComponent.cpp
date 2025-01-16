#include "HardLightFloorComponent.h"

UHardLightFloorComponent::UHardLightFloorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FloorMaterial = NULL;
    this->SealSpeed = 200.00f;
    this->FloorMatInstance = NULL;
}


