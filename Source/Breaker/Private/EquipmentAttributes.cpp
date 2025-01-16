#include "EquipmentAttributes.h"

FEquipmentAttributes::FEquipmentAttributes() {
    this->EquipmentCategory = EEquipmentCategory::None;
    this->EquipmentSlot = EEquipmentType::Amp;
    this->PrimaryDamageStrength = EDamageStrengthType::None;
    this->PrimaryDamageSource = EDamageSourceType::Melee;
    this->AimingStanceType = EBreakerAimingStance::None;
    this->BaseMovementSpeedModifier = 0;
    this->DamageMultiplier = 0.00f;
    this->StaggerMultiplier = 0.00f;
    this->BaseCritChance = 0.00f;
    this->CombatEnergyAwardedPerHit = 0.00f;
    this->BatteryGainedPerHit = 0;
    this->FireType = EBreakerRangedFireType::SemiAuto;
    this->AimCameraStyle = EBreakerCameraType::Default;
    this->EffectiveDamageRange = 0;
    this->FireRate = 0;
    this->OverrideProjectileVelocity = 0.00f;
    this->VerticalRecoilAmount = 0.00f;
    this->HorizontalRecoilAmount = 0.00f;
    this->AimMovementSpeedModifier = 0;
    this->AimDownSightsSpeed = 0;
    this->BatteryUsePerRound = 0.00f;
    this->bUseSolidBarForBattery = false;
    this->AccuracyConeAngle = 0.00f;
    this->MaxAccuracyConeAngle = 0.00f;
    this->AccuracyLossOnShot = 0.00f;
    this->AccuracyDecayDelay = 0.00f;
    this->AccuracyDecayAcceleration = 0.00f;
    this->AccuracyDecayMaxCorrectionPerSecond = 0.00f;
    this->BurstShots = 0;
    this->TimeBetweenBurstShots = 0.00f;
    this->SpreadShots = 0;
    this->ChargeUpTime = 0.00f;
    this->bAutoReload = false;
    this->ReloadTime = 0.00f;
    this->AmmoClipSize = 0;
    this->BaseAmpChargeAmount = 0.00f;
    this->bUsesAltInHandMesh = false;
}

