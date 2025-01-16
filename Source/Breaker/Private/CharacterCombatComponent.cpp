#include "CharacterCombatComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UCharacterCombatComponent::UCharacterCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ParryRetaliationPlaybackSpeed = 2.00f;
    this->ParrySuccessHasInvincibility = true;
    this->bSplitAttackButtons = true;
    this->bGearDropsShouldFillEmptyMeleeSlotsFirst = false;
    this->CurrentCombatEnergyUpgradeLevel = 0;
    this->CombatData = NULL;
    this->MaskedHoldDurationThreshold = 0.25f;
    this->MaskedHoldDurationForgivenessThreshold = 0.20f;
    this->bUseRawHoldUltraForgiveness = true;
    this->bAllowSkipToFinisherNormalCharges = true;
    this->RawHoldDurationForgivenessThreshold = 0.20f;
    this->CadenceDamageTimeWindow = 0.50f;
    this->SpecialLinkInterruptTimeWindow = 0.15f;
    this->MaxSwapComboLinks = -1;
    this->BufferedInputDuration = 0.30f;
    this->SwapComboGameplayEffect = NULL;
    this->CounterStrikeGameplayEffect = NULL;
    this->LinkableStrikeGameplayEffect = NULL;
    this->SwapComboDurationBoostPerStack = 0.15f;
    this->PerfectDodgeComboLinkerTimeoutDuration = 2.00f;
    this->PerfectDodgeCounterStrikeHitstopDurationModifier = 1.50f;
    this->LostHealthToRecoverHealthFactor = 0.60f;
    this->BurstDamageToRecoverHealthFactor = 0.25f;
    this->MaxHealthRecoveredFromBurstDamage = 0.10f;
    this->RecoverHealthDecayDelay = 3.00f;
    this->RecoverHealthDecayPerSecond = 10.00f;
    this->FootSlideVelocityMultiplier = 0.20f;
    this->FootSlideDuration = 0.75f;
    this->FlootSlideMaxDistance = 200.00f;
    this->DashAttackConversionThreshold = 0.20f;
    this->AirAttackCameraModifier = NULL;
    this->WieldedSlot = ECharacterEquipmentSlot::None;
    this->EquippedComponents.AddDefaulted(16);
    this->ProjectileDeflector = NULL;
    this->DashAttackTargetEvaluator = NULL;
}

void UCharacterCombatComponent::UnregisterCompanion(AActor* Companion) {
}

void UCharacterCombatComponent::UnequipGearFromSlot(ECharacterEquipmentSlot EquipmentSlot) {
}

void UCharacterCombatComponent::UnequipGearByGuid(FGuid GearGuid) {
}

void UCharacterCombatComponent::Server_SetWieldedSlot_Implementation(ECharacterEquipmentSlot NewWieldedSlot) {
}

void UCharacterCombatComponent::Server_RemoveAllGear_Implementation() {
}

void UCharacterCombatComponent::Server_EquipNewHolobyte_Implementation(const FGameplayTag GearTag, const FGenericGearInfo_RPC GearInfo, ECharacterEquipmentSlot EquipmentSlot) {
}

void UCharacterCombatComponent::Server_EquipNewGear_Implementation(const FGameplayTag GearTag, const FGenericGearInfo_RPC GearInfo, ECharacterEquipmentSlot EquipmentSlot) {
}

bool UCharacterCombatComponent::RollForCriticalDamage(AActor* Attacker, AActor* Target, FBreakerDamage Damage) {
    return false;
}

void UCharacterCombatComponent::ResetQuickRecoverHealthDecayTimer(bool bForce) {
}

void UCharacterCombatComponent::ResetCombatEnergyLevels() {
}

void UCharacterCombatComponent::RemoveCompanionGroup(const FGameplayTag& GroupTag) {
}

void UCharacterCombatComponent::RemoveAllGear() {
}

void UCharacterCombatComponent::RegisterCompanion(const FGameplayTag& GroupTag, const FSummonedCompanionInfo& CompanionInfo) {
}

void UCharacterCombatComponent::RegenerateDefaultSycomGear(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute) {
}

void UCharacterCombatComponent::QuickRecoverHealth_OnHealthChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute) {
}

void UCharacterCombatComponent::OnRep_WieldedSlot() {
}

void UCharacterCombatComponent::OnRep_PreSpawnedGear(const TArray<ABreakerWeaponProp*>& PreviousValues) {
}

void UCharacterCombatComponent::OnRep_EquipmentComponentArray(TArray<UBreakerEquipmentComponent*> OldEquippedComponents) {
}

void UCharacterCombatComponent::OnRep_CompanionGroups() {
}

void UCharacterCombatComponent::OnNormalChargeReleased(ABreakerWeaponProp* WeaponProp, ECombatActionResult Action, float FillRatio) {
}

void UCharacterCombatComponent::OnDashComplete(FDashEventParams DashEventParams) {
}

void UCharacterCombatComponent::OnDashBegan(FDashEventParams DashEventParams) {
}

void UCharacterCombatComponent::OnBladeSpecialIncrementProgress(ABreakerWeaponProp* Weapon, int32 ChargeLevel) {
}

void UCharacterCombatComponent::OnAmpTriggered(ABreakerWeaponProp* Weapon) {
}

void UCharacterCombatComponent::OnAmpActivated(ABreakerWeaponProp* Weapon) {
}

void UCharacterCombatComponent::Multicast_UnregisteredCompanion_Implementation(const FSummonedCompanionInfo CompanionInfo) {
}

void UCharacterCombatComponent::Multicast_SetWieldedSlot_Implementation(ECharacterEquipmentSlot NewWieldedSlot) {
}

void UCharacterCombatComponent::Multicast_RegisteredCompanion_Implementation(const FSummonedCompanionInfo CompanionInfo) {
}

void UCharacterCombatComponent::Multicast_EquipNewGear_Implementation(const FGameplayTag GearTag, const FGenericGearInfo_RPC GearInfo, ECharacterEquipmentSlot EquipmentSlot) {
}

void UCharacterCombatComponent::MontageSectionChanged(UAnimMontage* Montage, FName PrevSection, FName NewSection) {
}

void UCharacterCombatComponent::ModifySavedLoadoutOnEquipmentChanged(ECharacterEquipmentSlot EquipmentSlot, FGenericGearInfo OldGearInfo, FGenericGearInfo NewGearInfo) {
}

void UCharacterCombatComponent::MarkPreciseInputWindow(float WindowDuration) {
}

bool UCharacterCombatComponent::IsPlayingGroundCombo() const {
    return false;
}

bool UCharacterCombatComponent::IsInCombo() const {
    return false;
}

bool UCharacterCombatComponent::IsGearEquipped(const FGenericGearInfo& GearInfo, ECharacterEquipmentSlot& OutEquipmentSlot, EEquipmentType& OutEquipmentType) const {
    return false;
}

bool UCharacterCombatComponent::IsCompanion(AActor* actorToCheck) const {
    return false;
}

bool UCharacterCombatComponent::HasPrecisionInput() const {
    return false;
}

void UCharacterCombatComponent::GrantCombatEnergyUpgradePoints(int32 Points, bool bFromTable) {
}

void UCharacterCombatComponent::GrantCombatEnergy(float Points) {
}

ABreakerWeaponProp* UCharacterCombatComponent::GetWieldedGear() const {
    return NULL;
}

UBreakerEquipmentComponent* UCharacterCombatComponent::GetWieldedEquipmentComponent() const {
    return NULL;
}

ABreakerWeaponProp* UCharacterCombatComponent::GetWeaponForDamage(const FBreakerDamage& Damage, bool bPreferActiveEquipedWeapon) const {
    return NULL;
}

ABreakerWeaponProp* UCharacterCombatComponent::GetSpecificPrespawnedGear(TSubclassOf<ABreakerWeaponProp> GearClass) const {
    return NULL;
}

ABreakerMod* UCharacterCombatComponent::GetHolobyteBySlot(ECharacterEquipmentSlot Slot) const {
    return NULL;
}

ABreakerWeaponProp* UCharacterCombatComponent::GetEquippedRail() const {
    return NULL;
}

ABreakerWeaponProp* UCharacterCombatComponent::GetEquippedKit() const {
    return NULL;
}

ABreakerWeaponProp* UCharacterCombatComponent::GetEquippedHoverboard() const {
    return NULL;
}

ABreakerWeaponProp* UCharacterCombatComponent::GetEquippedDash() const {
    return NULL;
}

ABreakerWeaponProp* UCharacterCombatComponent::GetEquippedCustomActionB() const {
    return NULL;
}

ABreakerWeaponProp* UCharacterCombatComponent::GetEquippedCustomActionA() const {
    return NULL;
}

ABreakerWeaponProp* UCharacterCombatComponent::GetEquippedBlade() const {
    return NULL;
}

ABreakerWeaponProp* UCharacterCombatComponent::GetEquippedAmp() const {
    return NULL;
}

EEquipmentType UCharacterCombatComponent::GetEquipmentTypeForEquipmentSlot(const ECharacterEquipmentSlot EquipmentSlot) const {
    return EEquipmentType::Amp;
}

ECharacterEquipmentSlot UCharacterCombatComponent::GetEquipmentSlotForEquipmentType(const EEquipmentType EquipmentType) const {
    return ECharacterEquipmentSlot::None;
}

ECharacterEquipmentSlot UCharacterCombatComponent::GetEquipmentSlotForDamage(const FBreakerDamage& Damage) const {
    return ECharacterEquipmentSlot::None;
}

float UCharacterCombatComponent::GetEquipmentCooldownTimeRemainingRatio(const ECombatActionRoute ActionRoute) const {
    return 0.0f;
}

UBreakerEquipmentComponent* UCharacterCombatComponent::GetEquipmentComponentForDamage(const FBreakerDamage& Damage) const {
    return NULL;
}

UBreakerEquipmentComponent* UCharacterCombatComponent::GetEquipmentComponentBySlot(ECharacterEquipmentSlot Slot) const {
    return NULL;
}

ABreakerWeaponProp* UCharacterCombatComponent::GetEquipmentByType(EEquipmentType EquipmentType) const {
    return NULL;
}

ABreakerWeaponProp* UCharacterCombatComponent::GetEquipmentBySlot(ECharacterEquipmentSlot Slot) const {
    return NULL;
}

UHitscanGunComponent* UCharacterCombatComponent::GetDeflectionHitscanGun() const {
    return NULL;
}

void UCharacterCombatComponent::GetCompanionGroup(const FGameplayTag& GroupTag, FSummonedCompanionGroup& OutGroup) {
}

int32 UCharacterCombatComponent::GetComboNumber() const {
    return 0;
}

void UCharacterCombatComponent::GetCombatEnergyUpgradeInfo(int32& OutTotalItemsFound, int32& OutTotalItemsNeeded) const {
}

float UCharacterCombatComponent::GetCombatEnergyOrbSize() const {
    return 0.0f;
}

float UCharacterCombatComponent::GetCombatEnergyMax() const {
    return 0.0f;
}

float UCharacterCombatComponent::GetCombatEnergy() const {
    return 0.0f;
}

void UCharacterCombatComponent::GetAllEquippedStatusEffects(TArray<FGameplayTag>& OutEffects) const {
}

void UCharacterCombatComponent::GetAllCompanions(TArray<AActor*>& OutCompanions) {
}

ECombatActionRoute UCharacterCombatComponent::GetActionRouteForEquipmentSlot(const ECharacterEquipmentSlot EquipmentSlot) const {
    return ECombatActionRoute::None;
}

void UCharacterCombatComponent::EquipHolobyteByTag(FGameplayTag HolobyteTag, FGenericGearInfo GearInfo, ECharacterEquipmentSlot ForcedEquipmentSlot) {
}

void UCharacterCombatComponent::EquipGearByTag(FGameplayTag GearTag, FGenericGearInfo GearInfo, ECharacterEquipmentSlot ForcedEquipmentSlot) {
}

void UCharacterCombatComponent::DeductCombatEnergy(float Points) {
}

void UCharacterCombatComponent::ConsumeQuickRecoverHealthForDamageDealt(float Damage) {
}

void UCharacterCombatComponent::CombatEnergy_OnLevelChanged(ELevelState NewLevel, ELevelState OldLevel) {
}

void UCharacterCombatComponent::CombatEnergy_OnEnergyUpgradeChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute) {
}

void UCharacterCombatComponent::CombatEnergy_OnEnergyChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute) {
}

void UCharacterCombatComponent::CombatEnergy_OnComboEvent(UCharacterCombatComponent* CombatComponent, FCharacterCombatComboEvent Event) {
}

void UCharacterCombatComponent::CombatEnergy_OnCombatActivityEvent(UCharacterCombatComponent* CombatComponent, FCharacterCombatActivityEvent Event) {
}

void UCharacterCombatComponent::ClearPreciseInputWindow() {
}

void UCharacterCombatComponent::CatchReceivedDamage(ABreakerPawn* Caller, AActor* Source, FBreakerDamage Damage) {
}

void UCharacterCombatComponent::CatchMontageCompleted(UAnimMontage* Montage, bool bInterrupted) {
}

void UCharacterCombatComponent::CatchInflictedDamage(ABreakerPawn* Caller, AActor* Victim, FBreakerDamage Damage) {
}

void UCharacterCombatComponent::AnimInstanceChanged(AActor* Actor, UAnimInstance* OldInstance, UAnimInstance* NewInstance) {
}

void UCharacterCombatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCharacterCombatComponent, CompanionGroups);
    DOREPLIFETIME(UCharacterCombatComponent, WieldedSlot);
    DOREPLIFETIME(UCharacterCombatComponent, EquippedComponents);
    DOREPLIFETIME(UCharacterCombatComponent, PreSpawnedGear);
    DOREPLIFETIME(UCharacterCombatComponent, PreSpawnedHolobytes);
    DOREPLIFETIME(UCharacterCombatComponent, ProjectileDeflector);
}


