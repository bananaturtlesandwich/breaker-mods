#include "BTD_LeashingCheck.h"

UBTD_LeashingCheck::UBTD_LeashingCheck() {
    this->bUseBlackboardSelectorsForLeashing = true;
    this->LeashRangeCmRaw = 3000.00f;
    this->bResetTargetActorOnLeashTestPass = true;
}


