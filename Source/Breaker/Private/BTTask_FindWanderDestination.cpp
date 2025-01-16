#include "BTTask_FindWanderDestination.h"

UBTTask_FindWanderDestination::UBTTask_FindWanderDestination() {
    this->NodeName = TEXT("Breaker_AIFindWanderDestination");
    this->bUseBlackboardSelectorForMaxWanderDistanceCm = false;
    this->MaxWanderDistanceCm = 3500.00f;
    this->bCanWanderOutsideLeashRange = false;
    this->WanderCooldownSecondsIfSuccess = 5.55f;
    this->WanderCooldownSecondsDeviationMin = 2.35f;
    this->WanderCooldownSecondsDeviationMax = 4.55f;
    this->bShouldWanderFromAnchorPoint = false;
    this->bShouldResetCachedLocationDataOnMemoryInitialized = false;
    this->bShouldResetCachedTimeDataOnMemoryInitialized = false;
    this->bShouldPreferPOI = true;
}


