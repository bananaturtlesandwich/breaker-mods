#include "CharacterCombatData.h"

UCharacterCombatData::UCharacterCombatData() {
    this->ProjectileDeflectionWeapon = NULL;
    this->VictimHitStopModifier = 1.00f;
    this->bAggressiveFlashStepInterrupts = false;
    this->GlobalMaxAllowedInAirAttacks = 1;
    this->HeldTimeRequiredToPredictChargeAttack = 0.10f;
    this->RedFinisherGameplayEffect = NULL;
    this->bFlashStepCanBeRedFinisher = false;
    this->FlashStepRedFinisherRequiredCharge = 0.95f;
    this->bNormalFinisherCanBeRedFinisher = false;
    this->NormalFinisherRequiredCharge = 0.95f;
    this->FirstStrikeMagnetismModifier = 0.00f;
    this->TimeBetweenHitsThatAllowsMagnetism = 0.50f;
    this->BaseRootMotionModifierInMagnetism = 0.30f;
    this->DistanceScaleRootMotionModifierInMagnetism = 0.80f;
    this->TimeAfterHitThatReducesMeleeRootMotion = 0.50f;
    this->RootMotionModifierAfterHit = 0.10f;
    this->GroundParryAnimation = NULL;
    this->GroundParryRetaliationAnimation = NULL;
    this->ParryStaggerDamageAttributeMultiplier = 0.20f;
    this->PerfectParryPoiseDamageModifier = 2.00f;
    this->PerfectParryStaggerDurationModifier = 2.00f;
    this->PerfectParryDeflectedProjectileDamageModifier = 2.00f;
    this->SuccessfulParryIFrames = 0.30f;
    this->NormalParryFallthroughDamageModifier = 0.15f;
    this->bSuccessfulParryChangesPlayerRotation = true;
    this->bSuccessfulParryChangesPlayerRotationFromRanged = false;
    this->CombatOrbSize = 1.00f;
    this->GameplayItemsNeededPerCombatEnergyUpgrade.AddDefaulted(4);
    this->NumberOfPassiveHolobyteToLoseOnDeath = 1;
    this->CompanionMaxDistanceFromPlayerSquared = 25000000.00f;
}


