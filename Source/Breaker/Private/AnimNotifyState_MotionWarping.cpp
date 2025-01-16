#include "AnimNotifyState_MotionWarping.h"

UAnimNotifyState_MotionWarping::UAnimNotifyState_MotionWarping() {
    this->bWarpLocation = true;
    this->bIgnoreZ = true;
    this->MaxDistance = -1.00f;
    this->bWarpRotation = true;
    this->bHasCachedTransform = false;
}


