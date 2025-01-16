#include "AICombatAttackData.h"

FAICombatAttackData::FAICombatAttackData() {
    this->attackChannel = EAttackChannel::DefaultAttack;
    this->attackType = EChoreographerAttackType::Melee;
    this->AttackCooldownSeconds = 0.00f;
    this->PreferredDistanceMin = 0.00f;
    this->PreferredDistanceMax = 0.00f;
    this->WeightCoefficientForMinMaxRangeIdealPosition = 0.00f;
    this->TelegraphRotationSpeed = 0.00f;
    this->AttackLengthDefaultSeconds = 0.00f;
    this->DistanceDelayFactor = 0.00f;
    this->OffscreenAttackPenalty = 0.00f;
    this->bNeedsLineOfSightToAcquireTarget = false;
    this->bPrefersClearNavmeshToTarget = false;
    this->bRequiresCombatChoreographerPermission = false;
    this->bIsEnabled = false;
    this->bAbilityHasLinearTrajectory = false;
}

