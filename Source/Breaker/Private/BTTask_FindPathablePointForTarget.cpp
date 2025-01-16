#include "BTTask_FindPathablePointForTarget.h"

UBTTask_FindPathablePointForTarget::UBTTask_FindPathablePointForTarget() {
    this->NodeName = TEXT("Breaker_FindPathPointToTarget");
    this->StartingSeekPathPointDistanceCm = 2500.00f;
    this->ExpandRadiusPerFailureAmountCm = 100.00f;
    this->MaxNumberFailureAdjustments = 10;
    this->AcceptanceRadiusCm = 300.00f;
    this->MaxNumAttemptsToFindValidPath = 10;
    this->bUpdateDestinationWhenValidPathAlreadyExists = false;
}


