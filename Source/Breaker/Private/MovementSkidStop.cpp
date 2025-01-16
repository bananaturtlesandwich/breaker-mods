#include "MovementSkidStop.h"

UMovementSkidStop::UMovementSkidStop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnterSpeedLimit = 500.00f;
    this->SkidSeconds = 1.00f;
}


