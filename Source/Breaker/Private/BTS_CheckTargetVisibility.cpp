#include "BTS_CheckTargetVisibility.h"

UBTS_CheckTargetVisibility::UBTS_CheckTargetVisibility() {
    this->TargetTraceChannel = ECC_WorldStatic;
    this->bOtherAICanBlockLOS = false;
    this->DelayDurationSeconds = 0.50f;
    this->MaxTraceLengthCm = 3000.00f;
    this->bAbortCurrentExecutionIfLOSToTargetIsBroken = true;
}


