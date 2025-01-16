#include "CombatChoreographer.h"
#include "NoisePingComponent.h"

UCombatChoreographer::UCombatChoreographer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttackRateModifier = 1.00f;
    this->DistanceModifier = 1.00f;
    this->AggroRangeModifier = 1.00f;
    this->BlockedAttackHurryRate = 0.05f;
    this->DistanceMultiplierForLosingTarget = 2.00f;
    this->MaxCombatPositions = 512;
    this->MaxCombatPositionRange = 1000.00f;
    this->CombatPositionSpacing = 100.00f;
    this->PositionHysteresisFactor = 1000.00f;
    this->PositionHysteresisMax = 0.10f;
    this->FallbackDistanceForDeadTargets = 500.00f;
    this->WeightCoefficientForMinMaxRangePreference = 0.80f;
    this->DistancePenaltyForBeingTooClose = 5.00f;
    this->DistanceScorePerMeter = 0.10f;
    this->PenaltyForCrossingTargetsPersonalSpace = 2.00f;
    this->AttackDelayFromHit = 0.25f;
    this->AttackDelayFromHitMax = 1.00f;
    this->AttackDelayFromDodge = 1.00f;
    this->AttackDelayFromDodgeMax = 2.00f;
    this->AttackDelayFromComboLink = 1.50f;
    this->AttackDelayFromComboLinkMax = 3.00f;
    this->AttackSpeedBonusPerSecondSpentUnhit = 0.03f;
    this->MaxAttackSpeedBonusFromRemainingUnhit = 1.00f;
    this->BonusTimeForMostAttractiveAttacker = 0.20f;
    this->AttackValueForRecency = 1.00f;
    this->AttackValueForPriority = 1.00f;
    this->AttackValueForDistance = 0.01f;
    this->AttackChannelGlobalCooldownSeconds = 2.00f;
    this->CurrentAttackChannelGlobalCooldownSeconds = 2.00f;
    this->NumMeleeChannels = 2;
    this->NumRangedChannels = 1;
    this->PreviousNumMeleeChannels = 2;
    this->PreviousNumRangedChannels = 1;
    this->bPreviousCombatChoreographerSetting = true;
    this->NoisePingComponentArchetype = UNoisePingComponent::StaticClass();
}

bool UCombatChoreographer::VerifyAttackRestrictions(ACMCharBase* Enemy, UChoreographyComponent* EnemyChoreographyComp, AActor* Victim, EChoreographerAttackType attackType, EAttackChannel OverrideChannel) {
    return false;
}

void UCombatChoreographer::UnregisterExclusiveZone(int32 ID) {
}

void UCombatChoreographer::UnregisterCombatant(UChoreographyComponent* bro) {
}

void UCombatChoreographer::SetGlobalCooldown(float additivePerAbilitySeconds, float multiplicativePerAbilitySeconds) {
}

int32 UCombatChoreographer::RemoveFromChannel(const EChoreographerAttackType inAttackType, const int32 numToRemove) {
    return 0;
}

void UCombatChoreographer::ReleaseAttack(ACMCharBase* Enemy) {
}

void UCombatChoreographer::RegisterSuccessfulMeleeStrike(AActor* Attacker) {
}

void UCombatChoreographer::RegisterSuccessfulHitOnVictim(AActor* Victim) {
}

void UCombatChoreographer::RegisterSuccessfulDodge(AActor* Attacker) {
}

void UCombatChoreographer::RegisterSuccessfulComboLink(AActor* Attacker) {
}

int32 UCombatChoreographer::RegisterExclusiveZone(FTransform Transform) {
    return 0;
}

void UCombatChoreographer::RegisterCombatant(UChoreographyComponent* bro) {
}

bool UCombatChoreographer::RegisterAttack(ACMCharBase* Enemy, AActor* Victim, EChoreographerAttackType attackType, float IntendedLength, int32 Priority) {
    return false;
}

void UCombatChoreographer::OnADAWithNavModifierComponentRegister(AActor* InHypderFabActor) {
}

void UCombatChoreographer::InitializeAttackChannels(const UChoreographyComponent* combatantToUpdate) {
}

bool UCombatChoreographer::HasLineOfSightResultBP(UChoreographyComponent* Source, UChoreographyComponent* Target, bool& OutLOSValid) {
    return false;
}

TArray<FVector> UCombatChoreographer::GetNearbyCombatPositions(const FVector& Center, float Radius) {
    return TArray<FVector>();
}

TArray<UChoreographyComponent*> UCombatChoreographer::GetNearbyCombatants(const FVector& Center, float Radius) {
    return TArray<UChoreographyComponent*>();
}

float UCombatChoreographer::GetCurrentGlobalCooldown() const {
    return 0.0f;
}

TArray<UChoreographyComponent*> UCombatChoreographer::GetAllCombatants() {
    return TArray<UChoreographyComponent*>();
}

UCombatChoreographer* UCombatChoreographer::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UCombatChoreographer::ClogAllChannels(AActor* Victim, float DownTime) {
}

bool UCombatChoreographer::CanAttack(ACMCharBase* Enemy, AActor* Victim, EChoreographerAttackType attackType, float RequiredDownTime, int32 Priority, EAttackChannel OverrideChannel) {
    return false;
}

int32 UCombatChoreographer::AddToChannel(const EChoreographerAttackType inAttackType, const int32 numToAdd) {
    return 0;
}


