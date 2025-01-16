#include "SignificanceCalculator.h"

USignificanceCalculator::USignificanceCalculator() {
    this->bRunOnServer = true;
    this->bRunOnClient = true;
}

float USignificanceCalculator::Evaluate_Implementation(const USignificanceResponderComponent* Responder, const FTransform& SignifanctSource) const {
    return 0.0f;
}


