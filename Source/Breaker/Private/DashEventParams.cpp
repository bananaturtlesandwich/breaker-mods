#include "DashEventParams.h"

FDashEventParams::FDashEventParams() {
    this->DashType = EDashType::None;
    this->bPerfectDodge = false;
    this->PerfectDodgeDirection = EBreakerFourWayDirectional::Forward;
    this->PerfectDodgeTarget = NULL;
    this->bDashAttack = false;
}

