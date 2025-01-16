#include "BreakerWeaponProp.h"
#include "Net/UnrealNetwork.h"

ABreakerWeaponProp::ABreakerWeaponProp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->EquipmentComponent = NULL;
    this->bAlwaysShow = false;
    this->bDefaultHiddenOnSpawn = true;
    this->CustomAimCameraBlendOutCurve = NULL;
    this->bListenForMontageNotifies = false;
    this->GlobalAnimationSpeedModifier = 1.00f;
    this->GlobalRootMotionDistanceModifier = 1.00f;
    this->DissolveParameterName = TEXT("Gear_Dissolve_In");
    this->bSupportWeaponDissolve = true;
    this->bUseCameraBlendForDissolve = false;
    this->bUseAimingBlendForDissolve = false;
    this->NormalMeleeAttackMontage = NULL;
    this->ExecutionMontage = NULL;
    this->InAirMeleeAttackMontage = NULL;
    this->InAirDiveMeleeAttackMontage = NULL;
    this->SpecialMeleeAttackMontage = NULL;
    this->SpecialMeleeChargeAttackIntroSectionName = TEXT("Default");
    this->DashMeleeAttackMontage = NULL;
    this->DashMeleeAttackDistance = 500.00f;
    this->DashMeleeAttackTargetDistance = 600.00f;
    this->AirDashMeleeAttackMontage = NULL;
    this->JuicyTriggerTags.AddDefaulted(1);
    this->NormalAttackChargeMultiplier = 1.00f;
    this->BaseSpecialDamageMultiplier = 1.50f;
    this->DashDamageMultiplier = 0.40f;
    this->bAllowSpecialCharge = true;
    this->PerSpecialChargeMultiplierDelta = 0.25f;
    this->MinWarmUpSeconds = 0.00f;
    this->ChargeIncrementSeconds = 0.50f;
    this->FixedChargeIncrements = 10;
    this->TimeoutSeconds = 1.00f;
    this->CooldownSeconds = 0.00f;
    this->bCanActivateFinisherChargesOnAllWindows = true;
    this->AmpActivationStyle = EAmpActivationStyle::OnReleased;
    this->AmpActivateAnimation = NULL;
    this->bTreatAmpActivateAnimationAsMelee = false;
    this->bSpawnAmpActiveActorAfterAnimation = false;
    this->AmpActivateActor = NULL;
    this->CompanionActorClass = NULL;
    this->CompanionActorPoolSize = 0;
    this->bIsReleased = true;
    this->FinalNormalChargeRatioReached = 0.00f;
    this->DefaultMeleeLethalCamModifier = NULL;
    this->MostRecentActionRoute = ECombatActionRoute::None;
    this->bPlayingThrowAnim = false;
    this->bArcAiming = false;
    this->bIsItemEquipped = false;
    this->bInUse = false;
}

void ABreakerWeaponProp::WeaponShow_Implementation(ABreakerPawn* Pawn) {
}

void ABreakerWeaponProp::WeaponPropWillUnspawn_Implementation(ABreakerPawn* Pawn) {
}

void ABreakerWeaponProp::WeaponPropWasSpawned_Implementation(ABreakerPawn* PawnIfPlayer, ACMCharBase* PawnIfNPC) {
}

void ABreakerWeaponProp::WeaponHide_Implementation(ABreakerPawn* Pawn) {
}

bool ABreakerWeaponProp::UsesAimArc() const {
    return false;
}

bool ABreakerWeaponProp::UseMultiTrace() const {
    return false;
}

void ABreakerWeaponProp::UpdateOwnerAmpCharge() {
}

void ABreakerWeaponProp::TriggerOnEquipmentEffectStackChanged(int32 NewCount) {
}

void ABreakerWeaponProp::TriggerOnEquipmentCanPerformSpecialChanged(bool bCanPerform) {
}

float ABreakerWeaponProp::SpecialChargeTimeElapsed() const {
    return 0.0f;
}

float ABreakerWeaponProp::SpecialChargeProgress() const {
    return 0.0f;
}

void ABreakerWeaponProp::SetWeaponDissolveAmount(float Amount, bool bForce) {
}

void ABreakerWeaponProp::SetFinalSpecialChargeProgress(float ChargeProgress) {
}

void ABreakerWeaponProp::SetFinalSpecialChargeLevel(int32 ChargeLevel) {
}

void ABreakerWeaponProp::Server_SetWeaponStatusEffectTag_Implementation(FGameplayTag NewStatusEffectTag) {
}

void ABreakerWeaponProp::SERVER_NormalAttackChargeEnded_Implementation(float FinalChargeRatio, ECombatActionResult TargetAction) {
}

void ABreakerWeaponProp::SERVER_NormalAttackChargeBegan_Implementation(float ChargeDuration, ECombatActionResult TargetAction) {
}

void ABreakerWeaponProp::SERVER_ManageCompanionActor_Implementation(AActor* CompanionActor, bool bRelease) {
}

void ABreakerWeaponProp::ReturnCompanionActor(AActor* CompanionActor, bool bForceTriggerOnClients) {
}

void ABreakerWeaponProp::ResetSpecialCharge() {
}

AActor* ABreakerWeaponProp::ReleaseCompanionActor() {
    return NULL;
}

void ABreakerWeaponProp::OnWeaponProjectileImpact_Implementation(const FBreakerDamage& Damage, APawn* DamageInstigator, APawn* Target) {
}

void ABreakerWeaponProp::OnWeaponImpact_Implementation(const FBreakerDamage& Damage, APawn* DamageInstigator, APawn* Target) {
}

void ABreakerWeaponProp::OnWeaponDataTableChanged_Implementation() {
}


void ABreakerWeaponProp::OnStartSpecialAttack_Implementation(ABreakerPawn* Caller) {
}








void ABreakerWeaponProp::OnRep_ItemEquipped() {
}

void ABreakerWeaponProp::OnRep_InUse() {
}

void ABreakerWeaponProp::OnRep_GearData() {
}

void ABreakerWeaponProp::OnReleasedSpecialAttack_Implementation(ABreakerPawn* Caller, EHoldReleaseReason Reason) {
}




void ABreakerWeaponProp::OnPlayNormalAttack_Implementation(ABreakerPawn* Caller, EMeleeAttackState attackType) {
}







void ABreakerWeaponProp::OnEquipmentDetailsChanged(FCharacterEquipmentDetails CharacterEquipmentDetails) {
}

void ABreakerWeaponProp::OnCutsceneStart() {
}

void ABreakerWeaponProp::OnCompanionActorReturned_Implementation(AActor* CompanionActor) {
}

void ABreakerWeaponProp::OnCompanionActorReleased_Implementation(AActor* CompanionActor) {
}




void ABreakerWeaponProp::OnAmpSegmentsChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute) {
}



void ABreakerWeaponProp::Multicast_SetWeaponStatusEffectTag_Implementation(FGameplayTag NewStatusEffectTag) {
}

void ABreakerWeaponProp::MULTICAST_NormalAttackChargeEnded_Implementation(float FinalChargeRatio, ECombatActionResult TargetAction) {
}

void ABreakerWeaponProp::MULTICAST_NormalAttackChargeBegan_Implementation(float ChargeDuration, ECombatActionResult TargetAction) {
}

void ABreakerWeaponProp::MULTICAST_ManageCompanionActor_Implementation(AActor* CompanionActor, bool bRelease) {
}

void ABreakerWeaponProp::MontageSectionChanged(UAnimMontage* Montage, FName PrevSection, FName NewSection) {
}

bool ABreakerWeaponProp::IsWeaponShowing() const {
    return false;
}

bool ABreakerWeaponProp::IsRail() const {
    return false;
}

bool ABreakerWeaponProp::IsPerformingSpecialAttack_Implementation() const {
    return false;
}

bool ABreakerWeaponProp::IsLocallyControlled() const {
    return false;
}

bool ABreakerWeaponProp::IsChargingSpecial() const {
    return false;
}

bool ABreakerWeaponProp::IsChargingNormal() const {
    return false;
}

bool ABreakerWeaponProp::IsBlade() const {
    return false;
}

bool ABreakerWeaponProp::IsAmp() const {
    return false;
}

void ABreakerWeaponProp::GetWeaponStatusEffectInfo(FGameplayTag& WeaponStatusEffectTag, int32& WeaponStatusEffectLevel) const {
}


ACMCharBase* ABreakerWeaponProp::GetNpcPawn() const {
    return NULL;
}

float ABreakerWeaponProp::GetModifiedFireRate() const {
    return 0.0f;
}

float ABreakerWeaponProp::GetMeleeDashTargetDistance() const {
    return 0.0f;
}

float ABreakerWeaponProp::GetMeleeDashDistance() const {
    return 0.0f;
}

float ABreakerWeaponProp::GetMaxChargeSeconds() const {
    return 0.0f;
}

bool ABreakerWeaponProp::GetGenericGearInfo(FGenericGearInfo& GenericGearInfo) const {
    return false;
}

FEquipmentDetails ABreakerWeaponProp::GetGearData() const {
    return FEquipmentDetails{};
}

FEquipmentAttributes ABreakerWeaponProp::GetGearAttributes() const {
    return FEquipmentAttributes{};
}

float ABreakerWeaponProp::GetFinalSpecialChargeTime() const {
    return 0.0f;
}

float ABreakerWeaponProp::GetFinalSpecialChargeProgress() const {
    return 0.0f;
}

int32 ABreakerWeaponProp::GetFinalChargeLevelReached() const {
    return 0;
}

TArray<UMaterialInstanceDynamic*> ABreakerWeaponProp::GetDynamicMaterialInstances() {
    return TArray<UMaterialInstanceDynamic*>();
}


ABreakerPlayerController* ABreakerWeaponProp::GetCharacterPlayerController() const {
    return NULL;
}

ABreakerPawn* ABreakerWeaponProp::GetCharacterPawn() const {
    return NULL;
}

float ABreakerWeaponProp::GetBatteryGainedPerHit() const {
    return 0.0f;
}

int32 ABreakerWeaponProp::GetBaseMoveSpeedModifier_Implementation() const {
    return 0;
}

FRootMotionPlaySettings ABreakerWeaponProp::GetAnimationModifersForMontage(UAnimMontage* Montage, FRootMotionPlaySettings& InOutPlaySettings) const {
    return FRootMotionPlaySettings{};
}

FAmpSummonParams ABreakerWeaponProp::GetAmpSummonParams_Implementation() {
    return FAmpSummonParams{};
}


int32 ABreakerWeaponProp::GetAimMoveSpeedModifier_Implementation() const {
    return 0;
}

EBreakerCameraType ABreakerWeaponProp::GetAimCameraStyle_Implementation() const {
    return EBreakerCameraType::Default;
}

UBreakerAnimInstance* ABreakerWeaponProp::GetActiveAnimInstance() const {
    return NULL;
}

void ABreakerWeaponProp::GeneratePredictedAimArcPath(AActor* SourceActor, FRotator ActorRotation, FRotator ControlRotation, EBreakerCameraType AimStyle, const FAimArcConfig& ArcConfig, FRotator& OutRotation, FPredictProjectilePathResult& OutResult) {
}

FRuntimeFloatCurve ABreakerWeaponProp::GenerateDamageFalloffCurve() const {
    return FRuntimeFloatCurve{};
}

void ABreakerWeaponProp::DrawThrowArc() {
}



void ABreakerWeaponProp::CatchMontageNotifyEnd(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

void ABreakerWeaponProp::CatchMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

void ABreakerWeaponProp::CatchMontageCompleted(UAnimMontage* Montage, bool bInterrupted) {
}

bool ABreakerWeaponProp::CanTransitionToSpecial_Implementation(ECombatActionResult Action, bool bGrounded) const {
    return false;
}

float ABreakerWeaponProp::CalculateBaseStagger_Implementation(const TArray<EDamageDetail>& DamageDetails) const {
    return 0.0f;
}

float ABreakerWeaponProp::CalculateBaseDamage_Implementation(const TArray<EDamageDetail>& DamageDetails) const {
    return 0.0f;
}

void ABreakerWeaponProp::AnimInstanceChanged_Implementation(UAnimInstance* OldInstance, UAnimInstance* NewInstance) {
}


void ABreakerWeaponProp::ActivateAmp_Server_Implementation(FAmpSummonParams SummonParams, bool bIsDeferredSpawn) {
}

void ABreakerWeaponProp::ActivateAmp_Multicast_Implementation(FAmpSummonParams SummonParams) {
}

void ABreakerWeaponProp::ActivateAmp() {
}

void ABreakerWeaponProp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABreakerWeaponProp, RepGearTag);
    DOREPLIFETIME(ABreakerWeaponProp, bIsItemEquipped);
    DOREPLIFETIME(ABreakerWeaponProp, bInUse);
    DOREPLIFETIME(ABreakerWeaponProp, CompanionActorPool);
}


