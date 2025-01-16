#include "AnimNotifyState_ScaleRootMotionToTarget.h"

UAnimNotifyState_ScaleRootMotionToTarget::UAnimNotifyState_ScaleRootMotionToTarget() {
    this->TargetKey = TEXT("TargetActor");
    this->AnimatedDistance = 300.00f;
    this->MinDistance = 0.00f;
    this->MaxDistance = 1200.00f;
    this->FullStopThreshold = 0.00f;
}


