#include "BreakerProcBoneComponent.h"

UBreakerProcBoneComponent::UBreakerProcBoneComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LookAtAcceleration = 0.00f;
    this->LookAtThresholdAngle = 0.00f;
    this->LookAtPercentSpine = 0.00f;
    this->FlinchAcceleration = 0.00f;
    this->TargetHeightOffset = 0.00f;
}

void UBreakerProcBoneComponent::TriggerTwitch() {
}

bool UBreakerProcBoneComponent::IsTargetInRange() const {
    return false;
}


