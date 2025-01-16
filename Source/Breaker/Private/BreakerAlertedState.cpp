#include "BreakerAlertedState.h"

UBreakerAlertedState::UBreakerAlertedState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AlertDuration = 2.00f;
    this->SpinTime = 0.20f;
    this->TargetToFace = NULL;
}

FName UBreakerAlertedState::State_GetName() const {
    return NAME_None;
}


