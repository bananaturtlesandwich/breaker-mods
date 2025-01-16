#include "EnemyStaggerInfo.h"

UEnemyStaggerInfo::UEnemyStaggerInfo() {
    this->ThresholdAsAPercentOfHealth = 0.00f;
    this->TimeSpentStaggered = 0.00f;
    this->DelayBeforeStaggerDecays = 0.00f;
    this->TimeForStaggerToDecayCompletely = 0.00f;
    this->NetworkInterpolationRate = 0.50f;
    this->MP_ThresholdAsAPercentOfHealth = 0.00f;
    this->MP_TimeSpentStaggered = 0.00f;
    this->MP_DelayBeforeStaggerDecays = 0.00f;
    this->MP_TimeForStaggerToDecayCompletely = 0.00f;
    this->MP_LightDamageModifier = 0.00f;
}

float UEnemyStaggerInfo::GetTimeSpentStaggered(int32 NumPlayers) {
    return 0.0f;
}

float UEnemyStaggerInfo::GetTimeForStaggerToDecayCompletely(int32 NumPlayers) {
    return 0.0f;
}

float UEnemyStaggerInfo::GetThresholdAsAPercentOfHealth(int32 NumPlayers) {
    return 0.0f;
}

float UEnemyStaggerInfo::GetDelayBeforeStaggerDecays(int32 NumPlayers) {
    return 0.0f;
}


