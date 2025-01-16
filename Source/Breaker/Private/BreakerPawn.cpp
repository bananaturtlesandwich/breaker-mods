#include "BreakerPawn.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "CharacterAttributeComponent.h"
#include "AimingOrbitCameraComponent.h"
#include "AttackTargetTriageComponent.h"
#include "BreakerInteractorComponent.h"
#include "BreakerMotionWarpingComponent.h"
#include "BreakerPawnInputActions.h"
#include "BreakerPlayerEventListener.h"
#include "BreakerStateListenerComponent.h"
#include "BreakerStateMachineComponent.h"
#include "HitStopComponent.h"
#include "MaterialStackComponent.h"
#include "MiniCutsceneCameraComponent.h"
#include "MovementBase.h"
#include "MovementDash.h"
#include "MovementGlider.h"
#include "MovementGrapple.h"
#include "MovementGrindRail.h"
#include "MovementGroundPound.h"
#include "MovementHookshot.h"
#include "MovementHoverboard.h"
#include "MovementRagdoll.h"
#include "MovementRootMotion.h"
#include "MovementSkidStop.h"
#include "MovementSwim.h"
#include "MovementSyncedAnim.h"
#include "PingComponent.h"
#include "PushBackComponent.h"
#include "SignificanceSourceComponent.h"
#include "StageReadyListenerComponent.h"
#include "SurfaceInfoComponent.h"
#include "TargetingCameraComponent.h"
#include "Templates/SubclassOf.h"

ABreakerPawn::ABreakerPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkelMeshComponent"));
    this->TeleportInMontage = NULL;
    this->OnDamagedSound = NULL;
    this->OnDeathSound = NULL;
    this->SurfaceInfoComponent = CreateDefaultSubobject<USurfaceInfoComponent>(TEXT("SurfaceInfoComponent"));
    this->HubMoveSpeedMultiplier = 1.20f;
    this->IsJumpPadJump = false;
    this->ClassSettings = NULL;
    this->SkelMesh = (USkeletalMeshComponent*)RootComponent;
    this->CosmeticSkelMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CosmeticSkelMeshComponent"));
    this->SyncedAnimation = CreateDefaultSubobject<UMovementSyncedAnim>(TEXT("SyncedAnimationComponent"));
    this->RootMotion = CreateDefaultSubobject<UMovementRootMotion>(TEXT("RootMotionComponent"));
    this->PrimaryStatus = CreateDefaultSubobject<UBreakerStateMachineComponent>(TEXT("PrimaryStatusComponent"));
    this->AttributeComponent = CreateDefaultSubobject<UCharacterAttributeComponent>(TEXT("AttributeContainer"));
    this->GlobalEventListener = CreateDefaultSubobject<UBreakerPlayerEventListener>(TEXT("GlobalEventListener"));
    this->Defeated = CreateDefaultSubobject<UBreakerStateListenerComponent>(TEXT("Defeated"));
    this->Revived = CreateDefaultSubobject<UBreakerStateListenerComponent>(TEXT("Revived"));
    this->StageReadyListener = CreateDefaultSubobject<UStageReadyListenerComponent>(TEXT("StageReadyListener"));
    this->SignificanceSource = CreateDefaultSubobject<USignificanceSourceComponent>(TEXT("SignificanceSource"));
    this->TargetTriage = CreateDefaultSubobject<UAttackTargetTriageComponent>(TEXT("TargetTriage"));
    this->TurnMagnetismDistance = 600.00f;
    this->CameraBaseTrackingPosition = CreateDefaultSubobject<USceneComponent>(TEXT("CameraBaseTrackingPositionComp"));
    this->AimingCamera = CreateDefaultSubobject<UAimingOrbitCameraComponent>(TEXT("AimingCameraComponent"));
    this->AmpMacroAimingCamera = CreateDefaultSubobject<UAimingOrbitCameraComponent>(TEXT("AimingCameraComponent_AmpMacro"));
    this->InteriorCamera = CreateDefaultSubobject<UMiniCutsceneCameraComponent>(TEXT("InteriorCameraComponent"));
    this->NoLagCamera = CreateDefaultSubobject<UMiniCutsceneCameraComponent>(TEXT("NoLagCameraComponent"));
    this->LoadoutScreenCamera = CreateDefaultSubobject<UMiniCutsceneCameraComponent>(TEXT("LoadoutScreenCameraComponent"));
    this->ZLockCamera = CreateDefaultSubobject<UTargetingCameraComponent>(TEXT("ZLockCameraComponent"));
    this->PauseCamera = CreateDefaultSubobject<UMiniCutsceneCameraComponent>(TEXT("PauseCameraComponent"));
    this->PushBackComponent = CreateDefaultSubobject<UPushBackComponent>(TEXT("PushBackComponent"));
    this->MotionWarpingComponent = CreateDefaultSubobject<UBreakerMotionWarpingComponent>(TEXT("MotionWarpingComponent"));
    this->InteractorComponent = CreateDefaultSubobject<UBreakerInteractorComponent>(TEXT("InteractorComponent"));
    this->InputActions = CreateDefaultSubobject<UBreakerPawnInputActions>(TEXT("InputActions"));
    this->MoveManager = NULL;
    this->RunLogic = NULL;
    this->DamagePipeline = NULL;
    this->Cheats = NULL;
    this->QuestManager = NULL;
    this->TutorialManager = NULL;
    this->PingComponent = CreateDefaultSubobject<UPingComponent>(TEXT("PingComponent"));
    this->CombatComponent = NULL;
    this->MaterialStack = CreateDefaultSubobject<UMaterialStackComponent>(TEXT("MaterialStack"));
    this->BaseMoveMode = CreateDefaultSubobject<UMovementBase>(TEXT("BaseMoveModeComponent"));
    this->RagdollMotion = CreateDefaultSubobject<UMovementRagdoll>(TEXT("RagdollComponent"));
    this->DashAction = CreateDefaultSubobject<UMovementDash>(TEXT("DashComponent"));
    this->SkidStopAction = CreateDefaultSubobject<UMovementSkidStop>(TEXT("SkidStopComponent"));
    this->HoverboardAction = CreateDefaultSubobject<UMovementHoverboard>(TEXT("HoverboardMovementComponent"));
    this->GliderAction = CreateDefaultSubobject<UMovementGlider>(TEXT("GliderdMovementComponent"));
    this->SwimAction = CreateDefaultSubobject<UMovementSwim>(TEXT("SwimMovementComponent"));
    this->GrappleAction = CreateDefaultSubobject<UMovementGrapple>(TEXT("GrappleActionComponent"));
    this->SlamAction = CreateDefaultSubobject<UMovementGroundPound>(TEXT("GroundPoundActionComponent"));
    this->GrindAction = CreateDefaultSubobject<UMovementGrindRail>(TEXT("GrindRailComponent"));
    this->HookshotAction = CreateDefaultSubobject<UMovementHookshot>(TEXT("HookshotMovementComponent"));
    this->Sprinting = CreateDefaultSubobject<UBreakerStateListenerComponent>(TEXT("Sprinting"));
    this->Downed = CreateDefaultSubobject<UBreakerStateListenerComponent>(TEXT("Downed"));
    this->HitStopComponent = CreateDefaultSubobject<UHitStopComponent>(TEXT("HitStopComponent"));
    this->AnimHitReact = NULL;
    this->AnimHitReact_InAir = NULL;
    this->HeavyHitReactImpulseMulti = 1.00f;
    this->HeavyHitRectImpulseMax = 2000.00f;
    this->bSuperArmorOnMontages = false;
    this->bCanBroadCastReadyToHover = true;
    this->SyCom = NULL;
    this->CameraData = NULL;
    this->CachedCustomAimCameraBlendOutCurve = NULL;
    this->CHEAT_OverrideConstantCameraLagSpeed = false;
    this->CHEAT_CameraLagSpeed = 0.00f;
    this->MaxJumpHeight = 175.00f;
    this->MinJumpIdealImpulseFactor = 0.25f;
    this->HoldTimeForMaxJump = 0.20f;
    this->MaxJumps = 2;
    this->TimeRequiredBetweenAdditionalJumps = 0.20f;
    this->TimeJumpInputBuffered = 0.10f;
    this->SuccessiveJumpImpulseFactor = 0.80f;
    this->MaximumMagnetOffset = 250.00f;
    this->TargetMagnetSeparation = 100.00f;
    this->MagnetDirectionFOV = 15.00f;
    this->MaximumDashMagnetOffset = 800.00f;
    this->MaximumDashMagnetStickAngle = 15.00f;
    this->DashingIFrameSeconds = 0.50f;
    this->DashingIFrameSecondsPerfectDodge = 1.00f;
    this->DashBufferTimeDuringDashSuppression = 0.30f;
    this->DashCooldown = 0.40f;
    this->DashStopSpeedScale = 1.00f;
    this->DownedDuration = 30.00f;
    this->FellInHoleDamage = 10.00f;
    this->FallDamageMinDistance = 1500.00f;
    this->bPlayerAlly = true;
    this->PrimaryHealth_StartRegeneration_Time = 3.50f;
    this->PrimaryHealth_ExtraStartRegeneration_Time = 1.00f;
    this->PrimaryHealth_StartRegeneration_Timer = 0.00f;
    this->ShieldBreakThreshold = 0.10f;
    this->ShieldBreakInvincibilityTime = 1.50f;
    this->ShieldBreakInvincibilityTimer = 0.00f;
    this->SkinOfYourTeethThreshold = 0.20f;
    this->SkinOfYourTeethMinimumDamageThreshold = 0.10f;
    this->SkinOfYourTeethModification = 0.50f;
    this->AOEParryRadius = 300.00f;
    this->AOEParryDamageModifier = 0.00f;
    this->AOEParryStaggerModifier = 0.50f;
    this->GroundHeight = 0.00f;
    this->WaterHeight = 0.00f;
    this->bIsHiddenFromEnemies = false;
    this->AnimJump = NULL;
    this->AnimSuccessiveJump = NULL;
    this->bValidGlideConditions = false;
    this->AKAudioComponent->SetupAttachment(RootComponent);
    this->CameraBaseTrackingPosition->SetupAttachment(RootComponent);
    this->CosmeticSkelMesh->SetupAttachment(RootComponent);
    this->GliderAction->SetupAttachment(RootComponent);
    this->HoverboardAction->SetupAttachment(RootComponent);
}

void ABreakerPawn::UpdateCharacter(const UPlayerCharacterInfo* NewInfo) {
}

void ABreakerPawn::TryStopCurrentAnimation_Local(float BlendOutTime, UAnimMontage* SpecificMontage) {
}

void ABreakerPawn::TryClearAnimSync_Local() {
}

void ABreakerPawn::TriggerJumpPadImpulse_Local(float JumpStrength) {
}


void ABreakerPawn::TeleportAnimationOnLevelFadeInEnd(ELevelState NewLevel, ELevelState OldLevel) {
}

void ABreakerPawn::SuspendInput(const UObject* Caller) {
}

void ABreakerPawn::StopReplicatedMontage(UAnimMontage* Anim, float BlendOutTime) {
}

void ABreakerPawn::StopMontage_Server_Implementation(UAnimMontage* Anim, float BlendOutTime) {
}

void ABreakerPawn::StopMontage_Multicast_Implementation(UAnimMontage* Anim, float BlendOutTime) {
}

void ABreakerPawn::StartReplicatedMontage(UAnimMontage* Anim, FRootMotionPlaySettings Settings) {
}

void ABreakerPawn::StartMontage_Server_Implementation(UAnimMontage* Anim, FRootMotionPlaySettings Settings) {
}

void ABreakerPawn::StartMontage_Multicast_Implementation(UAnimMontage* Anim, FRootMotionPlaySettings Settings) {
}


bool ABreakerPawn::ShouldDisableProjectile(const FBreakerDamage& DamageInfo) const {
    return false;
}

bool ABreakerPawn::ShouldDeflectProjectile(const FBreakerDamage& DamageInfo) const {
    return false;
}

void ABreakerPawn::SetNullWaterState(bool bNewState) {
}

void ABreakerPawn::ServerRemoveMod_Implementation(AActor* RemoveFromActor, FGameplayTag ModTag) {
}

void ABreakerPawn::ServerAddMod_Implementation(AActor* AddToActor, FModSpecializationInfo ModInfo) {
}

void ABreakerPawn::Server_UpdateSyCom_Implementation(const FGameplayTag& NewSyComTag) {
}

void ABreakerPawn::SERVER_UpdateRemotePlayerSpawned_Implementation() {
}

void ABreakerPawn::Server_UpdateCharacter_Implementation(const UPlayerCharacterInfo* NewInfo) {
}

void ABreakerPawn::SERVER_PlayMontage_Implementation(UAnimMontage* Montage) {
}

void ABreakerPawn::RevertLocalTempCharacterVisuals() {
}

void ABreakerPawn::ResumeInput(const UObject* Caller) {
}

void ABreakerPawn::RespawnPlayer(const FVector SpawnPoint, bool Relocate) {
}

void ABreakerPawn::ResolveCombatActivityEvent(UCharacterCombatComponent* SourceComponent, FCharacterCombatActivityEvent Event) {
}

void ABreakerPawn::ResolveAttackParried(const FParryEventPayload& ParryEvent) {
}

void ABreakerPawn::ResetStatus() {
}

void ABreakerPawn::ResetRezTokens() {
}

void ABreakerPawn::ResetControlRotationToFacing() {
}

void ABreakerPawn::ResetControlRotation(const FRotator& ControlRotation) {
}

void ABreakerPawn::RemoveSuperArmor(UObject* Token) {
}

void ABreakerPawn::RemoveMod(AActor* RemoveFromActor, FGameplayTag ModTag) {
}

void ABreakerPawn::RemoveAllStatusEffects(bool RemovePassiveEffects) {
}

void ABreakerPawn::RemotePlayerSpawned_Implementation() {
}

bool ABreakerPawn::QueryWeaponLineOfSight(FVector TargetLocation, AActor* IgnoredTargetActor, FHitResult& OutHit) {
    return false;
}

bool ABreakerPawn::QueryAimingLocation(FVector& OutLocation, FHitResult& OutHit, float QueryDistance) {
    return false;
}

void ABreakerPawn::PushCameraType(const EBreakerCameraType CameraType, const bool bIsForAiming) {
}

void ABreakerPawn::PopCameraType(const EBreakerCameraType CameraType) {
}

void ABreakerPawn::PlayRootAnimation(UAnimMontage* Anim, FName SectionName, EBreakerSyncedAnimType SyncType) {
}

void ABreakerPawn::PlayMontageReplicated(UAnimMontage* Montage) {
}

void ABreakerPawn::PlayMeleeAnimation(UAnimMontage* AnimMontage, FRootMotionPlaySettings Settings) {
}

void ABreakerPawn::PlayHitReactInterruptAnimation(UAnimMontage* Anim, FName SectionName, FVector Impulse) {
}

void ABreakerPawn::Override_PreviousDesiredLocation(FVector Location) {
}

void ABreakerPawn::OnStatusChanged(FName PrevStatus, FName NextStatus) {
}

void ABreakerPawn::OnStaminaUpdated(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute) {
}

void ABreakerPawn::OnShieldChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute) {
}

void ABreakerPawn::OnReviveStateTick(float DeltaTime) {
}

void ABreakerPawn::OnReviveStateExit() {
}

void ABreakerPawn::OnReviveStateEntered() {
}

void ABreakerPawn::OnJumped(int32 WhichJump) const {
}

void ABreakerPawn::OnHoverboardHitWater(bool bIsOverWater) {
}



void ABreakerPawn::OnDownedTimeout() {
}

void ABreakerPawn::OnDefeated_Implementation() {
}

void ABreakerPawn::OnDashCompleted_Implementation(FDashEventParams DashEventParams) {
}





void ABreakerPawn::OnCharacterLanding_Implementation(const FBreakerCharacterLandingEvent& LandingEvent) {
}

void ABreakerPawn::MULTICAST_PlayMontage_Implementation(UAnimMontage* Montage) {
}

void ABreakerPawn::Movement_GetStick(FCharacterMovementStick& OutControlInput, bool bEvenIfDisabled, bool bUseCachedRepStick) {
}

void ABreakerPawn::ModifyRezTokens(int32 Points) {
}

void ABreakerPawn::ModifyAmmo(int32 Points) {
}

void ABreakerPawn::LowerHealthOrKill(float in_damage) {
}


void ABreakerPawn::KillPlayer(bool NewResetRezTokens) {
}

bool ABreakerPawn::IsWallGripping() const {
    return false;
}

bool ABreakerPawn::IsWalking() const {
    return false;
}

bool ABreakerPawn::IsTheLocalPlayer() const {
    return false;
}

bool ABreakerPawn::IsSwimming() const {
    return false;
}

bool ABreakerPawn::IsSubmerged() const {
    return false;
}

bool ABreakerPawn::IsStopping() const {
    return false;
}

bool ABreakerPawn::IsSprinting() const {
    return false;
}

bool ABreakerPawn::IsShieldBroken() const {
    return false;
}

bool ABreakerPawn::IsReviving() const {
    return false;
}

bool ABreakerPawn::IsPreparingToGlide() const {
    return false;
}

bool ABreakerPawn::IsPlayingHitReact() const {
    return false;
}

bool ABreakerPawn::IsPerformingTrick() const {
    return false;
}

bool ABreakerPawn::IsNPC() const {
    return false;
}

bool ABreakerPawn::IsIntangible() const {
    return false;
}

bool ABreakerPawn::IsInSafeSpace() const {
    return false;
}

bool ABreakerPawn::IsInputSuspended() const {
    return false;
}

bool ABreakerPawn::IsInNormalMovement() const {
    return false;
}

bool ABreakerPawn::IsInBlockingAnimation() const {
    return false;
}

bool ABreakerPawn::IsHoverboarding() const {
    return false;
}

bool ABreakerPawn::IsHookshotting() const {
    return false;
}

bool ABreakerPawn::IsGrounded() const {
    return false;
}

bool ABreakerPawn::IsGliding() const {
    return false;
}

bool ABreakerPawn::IsGlideFullyEngaged() const {
    return false;
}

bool ABreakerPawn::IsDrowning() const {
    return false;
}

bool ABreakerPawn::IsDefeated() const {
    return false;
}

bool ABreakerPawn::IsDashing() const {
    return false;
}

bool ABreakerPawn::IsDashButtonPressed_Local() const {
    return false;
}

bool ABreakerPawn::IsCreeping() const {
    return false;
}

bool ABreakerPawn::IsAmpReleased() const {
    return false;
}

bool ABreakerPawn::IsAlly() const {
    return false;
}

bool ABreakerPawn::IsAimingShooter() const {
    return false;
}

bool ABreakerPawn::IsAimingAmpAttack() const {
    return false;
}

bool ABreakerPawn::IsAimingAllowed(ECombatActionRoute ActionRoute) {
    return false;
}

bool ABreakerPawn::IsAiming() const {
    return false;
}

bool ABreakerPawn::InTownMode() const {
    return false;
}

bool ABreakerPawn::InNullWaterVolume() const {
    return false;
}

bool ABreakerPawn::InCharacterControl() const {
    return false;
}


bool ABreakerPawn::HasTempInvincibility() const {
    return false;
}

bool ABreakerPawn::HasSuperArmor() const {
    return false;
}

bool ABreakerPawn::HasPerfectDodge() const {
    return false;
}

void ABreakerPawn::HandleAnimInitialized() {
}

void ABreakerPawn::GiveTempInvincibility(float Duration) {
}

ABreakerWeaponProp* ABreakerPawn::GetWieldedWeapon() const {
    return NULL;
}

ABreakerWeaponProp* ABreakerPawn::GetWeaponForDamage(const FBreakerDamage& Damage, bool bPreferActiveEquipedWeapon) const {
    return NULL;
}

ABreakerWeaponProp* ABreakerPawn::GetWeapon() const {
    return NULL;
}

USkeletalMeshComponent* ABreakerPawn::GetVisibleMesh() const {
    return NULL;
}

FVector ABreakerPawn::GetStick_WorldRotated() const {
    return FVector{};
}

FVector ABreakerPawn::GetStick() const {
    return FVector{};
}


USkeletalMeshComponent* ABreakerPawn::GetSkelMesh() const {
    return NULL;
}

int32 ABreakerPawn::GetRezTokens() {
    return 0;
}

ABreakerWeaponProp* ABreakerPawn::GetRangedWeapon() const {
    return NULL;
}

TArray<ABreakerMod*> ABreakerPawn::GetMods() const {
    return TArray<ABreakerMod*>();
}

int32 ABreakerPawn::GetModifiedAmmoPickupCount(int32 OriginalCount) const {
    return 0;
}

ABreakerWeaponProp* ABreakerPawn::GetMeleeWeapon() const {
    return NULL;
}

int32 ABreakerPawn::GetMaxAmmo() {
    return 0;
}

FVector ABreakerPawn::GetLastInputDirection() const {
    return FVector{};
}

bool ABreakerPawn::GetJumpPressed() const {
    return false;
}

float ABreakerPawn::GetGlidePreparationRatio() const {
    return 0.0f;
}

float ABreakerPawn::GetGlideChargeRemainingRatio() const {
    return 0.0f;
}

ABreakerWeaponProp* ABreakerPawn::GetEquipmentForActionRoute(const ECombatActionRoute ActionRoute) const {
    return NULL;
}

UBreakerEquipmentComponent* ABreakerPawn::GetEquipmentComponentForActionRoute(const ECombatActionRoute ActionRoute) const {
    return NULL;
}

UBreakerEquipmentComponent* ABreakerPawn::GetEquipmentComponentBySlot(const ECharacterEquipmentSlot Slot) const {
    return NULL;
}

ABreakerWeaponProp* ABreakerPawn::GetEquipmentByType(const EEquipmentType Type) const {
    return NULL;
}

ABreakerWeaponProp* ABreakerPawn::GetEquipmentBySlot(const ECharacterEquipmentSlot Slot) const {
    return NULL;
}

bool ABreakerPawn::GetDashPressed() const {
    return false;
}

float ABreakerPawn::GetDashingIFrameSeconds(bool bIsPerfectDodge, bool bGetModified) const {
    return 0.0f;
}

float ABreakerPawn::GetCurrentShieldPercent() const {
    return 0.0f;
}

float ABreakerPawn::GetCurrentShield() const {
    return 0.0f;
}

float ABreakerPawn::GetCurrentRecoverableShieldPercent() const {
    return 0.0f;
}

float ABreakerPawn::GetCurrentRecoverableShield() const {
    return 0.0f;
}

FGameplayTag ABreakerPawn::GetCurrentCharacterClassTag() const {
    return FGameplayTag{};
}

void ABreakerPawn::GetCurrentBiomeInfo(FGameplayTag& OutBiome, FGameplayTag& OutZone) const {
}

USkeletalMeshComponent* ABreakerPawn::GetCosmeticSkelMesh() const {
    return NULL;
}

float ABreakerPawn::GetCharacterNormalizedSpeed_Implementation() {
    return 0.0f;
}

UAnimInstance* ABreakerPawn::GetAnimInstance() const {
    return NULL;
}

int32 ABreakerPawn::GetAmmo() {
    return 0;
}

ABreakerMod* ABreakerPawn::FindMod(FGameplayTag Tag) const {
    return NULL;
}

void ABreakerPawn::EquipGearByTag(FGameplayTag GearTag, FGenericGearInfo GearInfo, ECharacterEquipmentSlot ForcedEquipmentSlot) {
}

void ABreakerPawn::EnablePlayer_Implementation(UObject* Caller) {
}

void ABreakerPawn::DrownPlayer() {
}

void ABreakerPawn::DisablePlayer_Implementation(UObject* Caller) {
}

bool ABreakerPawn::DidDashRecently(float WithinSeconds) const {
    return false;
}

void ABreakerPawn::ConvertDashToAttack(UAnimMontage* Montage, FRootMotionPlaySettings Settings) {
}

void ABreakerPawn::ClearTempInvincibility() {
}

void ABreakerPawn::ClearMods() {
}

void ABreakerPawn::ClearCameraModifiers() {
}

void ABreakerPawn::CheckForSafeSpace() {
}

bool ABreakerPawn::CanInteractWithStuff() const {
    return false;
}

bool ABreakerPawn::CanHeal() const {
    return false;
}

bool ABreakerPawn::CanConvertDashToAttack(float WithinSeconds) const {
    return false;
}

bool ABreakerPawn::CanAutoInteractWithStuff() const {
    return false;
}


void ABreakerPawn::BP_TeleportSucceded_Implementation() {
}

void ABreakerPawn::ApplyLocalTempCharacterVisuals(const UPlayerCharacterInfo* CharacterInfo) {
}

void ABreakerPawn::AddSuperArmor(UObject* Token) {
}

void ABreakerPawn::AddMod(AActor* AddToActor, FModSpecializationInfo ModInfo) {
}

void ABreakerPawn::AddCameraModifier(const TSubclassOf<UBreakerCamModifier>& ModifierClass, const FBreakerCamModifierData& InitData, FName ID, bool bReplaceExisting) {
}


