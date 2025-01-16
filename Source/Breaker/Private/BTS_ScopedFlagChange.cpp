#include "BTS_ScopedFlagChange.h"

UBTS_ScopedFlagChange::UBTS_ScopedFlagChange() {
    this->bFlagValueWhileRelevant = true;
    this->bShouldResetCachedLocationDataOnMemoryInitialized = true;
    this->bShouldResetCachedTimeDataOnMemoryInitialized = true;
    this->UpdateBlackboardStateOnRelevancyChange = true;
    this->bRestorePreviousStateValues = true;
}


