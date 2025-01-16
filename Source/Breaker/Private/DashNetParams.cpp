#include "DashNetParams.h"

FDashNetParams::FDashNetParams() {
    this->bPlayMontages = false;
    this->bCanConvertBetweenDashTypes = false;
    this->DashTarget = NULL;
    this->IdealDashTargetDistance = 0.00f;
    this->DashType = EDashType::None;
    this->SteerMultiplier = 0.00f;
    this->bPerfectDodge = false;
    this->PerfectDodgeTarget = NULL;
    this->PerfectDodgeDirection = 0;
    this->UsedAirDashes = 0;
    this->UsedWallDashes = 0;
}

