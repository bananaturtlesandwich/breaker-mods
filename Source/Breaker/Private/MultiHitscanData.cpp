#include "MultiHitscanData.h"

FMultiHitscanData::FMultiHitscanData() {
    this->bAutoApplyTemplate = false;
    this->bDebugDraw = false;
    this->DamageMultiplier = 0.00f;
    this->ImpulseMultiplier = 0.00f;
    this->bUseSharedDamageFingerprint = false;
    this->ResetFingerprintInterval = 0.00f;
    this->bOverrideDamageStrength = false;
    this->OverrideDamageStrength = EDamageStrengthType::None;
    this->bOverrideDamageSource = false;
    this->OverrideDamageSource = EDamageSourceType::Melee;
    this->bOverrideVfxData = false;
    this->bResetsCadenceOnHit = false;
    this->bHaltRootMotionOnHit = false;
}

