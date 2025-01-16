#include "BTTask_SetFocusTarget.h"

UBTTask_SetFocusTarget::UBTTask_SetFocusTarget() {
    this->NodeName = TEXT("Breaker_FocusTargetChange");
    this->bRemoveFocusBeforeTaskExecution = false;
    this->bClearFocusTargetOrLocation = false;
    this->bClearAllFocusTargetsAndLocationsForPriorityAndBelow = false;
    this->FocusPriorityValueOverride = 0;
}


