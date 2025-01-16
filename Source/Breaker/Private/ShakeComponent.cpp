#include "ShakeComponent.h"

UShakeComponent::UShakeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SecondsPerShake = 0.00f;
}

void UShakeComponent::StopShake() {
}

void UShakeComponent::AppendShake(float Magnitude, float Duration) {
}


