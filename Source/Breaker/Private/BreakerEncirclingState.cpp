#include "BreakerEncirclingState.h"

UBreakerEncirclingState::UBreakerEncirclingState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetToEncircle = NULL;
    this->MaxRadius = 700.00f;
    this->EncirclingRadius = 700.00f;
    this->EncirclingHysteresis = 200.00f;
    this->AttackRange = 200.00f;
    this->MinMoveDuration = 2.00f;
    this->MaxMoveDuration = 6.00f;
    this->MinRestDuration = 2.00f;
    this->MaxRestDuration = 6.00f;
    this->ChangeDirectionChance = 0.33f;
    this->SprintChance = 0.50f;
}


