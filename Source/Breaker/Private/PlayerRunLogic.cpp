#include "PlayerRunLogic.h"

UPlayerRunLogic::UPlayerRunLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PercentOfBrightBloodToDropOnDeath = 0.10f;
    this->TeleportInMode = false;
    this->ExtractionMode = false;
    this->ExtractionZoneMeter = 0.00f;
    this->ExtractionZoneFillRate = 0.05f;
    this->ExtractionZoneDrainRate = 0.10f;
    this->SafeSpaceRadius = 1000.00f;
    this->DamageTimeUntilSafe = 5.00f;
    this->AbyssKingAOEReviveInvincibilityTime = 4.00f;
    this->AbyssKingAOEdamageReceivedModification = 1.20f;
    this->DangerZoneHealthDrainMeter = 0.00f;
    this->DangerZoneHealthDrainFillRate = 0.10f;
    this->DangerZoneHealthDrainDrainRate = 0.20f;
    this->DangerZoneHealthDamage = 5.00f;
    this->OwningPawn = NULL;
}

void UPlayerRunLogic::TryDamageBeaconEvent_Server_Implementation(int32 DamageAmount) {
}

void UPlayerRunLogic::TryApplyHostMigrationData(bool bForce) {
}

void UPlayerRunLogic::StopExtractionMode() {
}

void UPlayerRunLogic::StartPlayerPawnExtraction() {
}

void UPlayerRunLogic::SetLastSafePlace() {
}

void UPlayerRunLogic::SetFellInHoleSafeSpot(FTransform NewTransform) {
}

void UPlayerRunLogic::SetDeathDropSpawnLocationOverride(const FVector& Location) {
}

void UPlayerRunLogic::SetCombatantsNearby_Implementation(bool bHasNearby) {
}

void UPlayerRunLogic::PlayerExtracting_Server_Implementation() {
}

void UPlayerRunLogic::PlayerExtracting_Multicast_Implementation() {
}

void UPlayerRunLogic::PlayerExtracted_Server_Implementation() {
}

bool UPlayerRunLogic::PlayerExitsExtractionZone(AActor* Actor) {
    return false;
}

bool UPlayerRunLogic::PlayerExitsAbyssKingAOE(AActor* Actor) {
    return false;
}

bool UPlayerRunLogic::PlayerEnterExtractionZone(AActor* Actor) {
    return false;
}

bool UPlayerRunLogic::PlayerEnterAbyssKingAOE(AActor* Actor) {
    return false;
}

void UPlayerRunLogic::OnStageUnready_Implementation() {
}

void UPlayerRunLogic::OnStageReady_Implementation() {
}

void UPlayerRunLogic::OnPlayerRevived_Implementation() {
}

void UPlayerRunLogic::OnPlayerPawnExtractionStarted_Implementation() {
}

void UPlayerRunLogic::OnPlayerDefeated_Implementation() {
}


void UPlayerRunLogic::OnEnemyKilled(FBreakerAttackReport AttackInfo) {
}

bool UPlayerRunLogic::IsInsideExtractionZone() {
    return false;
}

bool UPlayerRunLogic::IsInsideAbyssKingAOE() {
    return false;
}

bool UPlayerRunLogic::InTownMode() const {
    return false;
}

void UPlayerRunLogic::HandleLevelStreamingComplete(const ELevelState NewLevel, const ELevelState OldLevel) {
}

FVector UPlayerRunLogic::GetOverrideDeathDropSpawnLocation() const {
    return FVector{};
}

void UPlayerRunLogic::GetNearbyCombatants_Implementation() {
}

FVector UPlayerRunLogic::GetFellInHoleSafeSpot() const {
    return FVector{};
}

void UPlayerRunLogic::FellInHole() {
}

void UPlayerRunLogic::FallInHole() {
}

void UPlayerRunLogic::ClearDeathDropSpawnLocationOverride() {
}

void UPlayerRunLogic::ApplyEquippedAbilities(FGameplayTag AbilityTag, int32 AbilityLevel) {
}


