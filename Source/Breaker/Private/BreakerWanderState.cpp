#include "BreakerWanderState.h"

UBreakerWanderState::UBreakerWanderState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WanderRadius = 500.00f;
    this->MinWaitTime = 2.00f;
    this->MaxWaitTime = 8.00f;
    this->TargetAlertRadius = 1000.00f;
    this->TargetClass = NULL;
}

FName UBreakerWanderState::State_GetName() const {
    return NAME_None;
}


