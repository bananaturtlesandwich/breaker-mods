#include "BreakerDamage.h"

FBreakerDamage::FBreakerDamage() {
    this->Amount = 0;
    this->BaseMultiplier = 0.00f;
    this->Stagger = 0.00f;
    this->StaggerMultiplier = 0.00f;
    this->Fingerprint = 0;
    this->SourceType = EDamageSourceType::Melee;
    this->StrengthType = EDamageStrengthType::None;
    this->Strength = 0.00f;
    this->MaxStrength = 0.00f;
    this->FlinchDecayTime = 0.00f;
    this->bComboFinisher = false;
    this->RelativeIntensity = 0.00f;
    this->DirectionMode = EDamageDirectionMode::UseImpulseDirection;
    this->bDamageDefeatedVictim = false;
    this->OptionalSource = NULL;
    this->OptionalTarget = NULL;
    this->SourceAttackChannel = 0;
    this->bTargetSurfacePointerValid = false;
    this->bCanDamageAllies = false;
    this->bHasDamageBeenConstructed = false;
}

