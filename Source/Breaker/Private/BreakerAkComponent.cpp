#include "BreakerAkComponent.h"

UBreakerAkComponent::UBreakerAkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsMultiPositioned = false;
}

void UBreakerAkComponent::SetBreakerMultiplePositions(const TArray<FTransform>& AudioPositions, AkMultiPositionType MultiPositionType) {
}


