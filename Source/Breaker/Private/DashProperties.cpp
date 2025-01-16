#include "DashProperties.h"

FDashProperties::FDashProperties() {
    this->bClampDistance = false;
    this->bUseCustomExitSpeed = false;
    this->CustomExitSpeed = 0.00f;
    this->PercentForAttackInterrupt = 0.00f;
    this->DashStaminaRegenDelaySeconds = 0.00f;
    this->EmptyDashStaminaRegenDelaySeconds = 0.00f;
    this->EstimatedGroundDashSpeedDuration = 0.00f;
    this->GroundDashDistance = 0.00f;
    this->GroundDashRotationSpeed = 0.00f;
    this->GroundDashChainCount = 0;
    this->GroundDashChainResetDuration = 0.00f;
    this->GroundDashStepHeight = 0.00f;
    this->bGroundDashConsumesAllStamina = false;
    this->EstimatedAirDashSpeedDuration = 0.00f;
    this->AirDashDistance = 0.00f;
    this->AirDashRotationSpeed = 0.00f;
    this->MaxAirDashes = 0;
    this->bCanAirDashAfterWallDash = false;
    this->bAirDashConsumesAllStamina = false;
    this->EstimatedWallDashSpeedDuration = 0.00f;
    this->MinWallDashDistance = 0.00f;
    this->MaxWallDashDistance = 0.00f;
    this->MaxWallDashes = 0;
    this->bCanWallDashFromWater = false;
    this->bWallDashConsumesAllStamina = false;
}

