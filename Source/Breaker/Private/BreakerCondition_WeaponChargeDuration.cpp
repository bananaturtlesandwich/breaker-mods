#include "BreakerCondition_WeaponChargeDuration.h"

UBreakerCondition_WeaponChargeDuration::UBreakerCondition_WeaponChargeDuration() {
    this->bUseManualValue = true;
    this->Value = 1.00f;
    this->WeaponProperty = EBreakerWeaponProperty::MinWarmUpSeconds;
    this->EquipmentSlot = ECharacterEquipmentSlot::PrimaryBlade;
    this->ChargeIncrementLevel = 1;
    this->bTreatAsPercentage = true;
    this->CompareFunction = EBreakerCompareFunction::GreaterThanOrEqualTo;
}


