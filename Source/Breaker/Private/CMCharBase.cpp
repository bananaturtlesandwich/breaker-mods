#include "CMCharBase.h"
#include "Engine/EngineTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "CharacterAttributeComponent.h"
#include "BreakerAkComponent.h"
#include "BreakerMotionWarpingComponent.h"
#include "EnemyLifeCycleComponent.h"
#include "HitStopComponent.h"
#include "MaterialStackComponent.h"
#include "Net/UnrealNetwork.h"
#include "PushBackComponent.h"
#include "ShakeComponent.h"
#include "Templates/SubclassOf.h"

ACMCharBase::ACMCharBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->NetDormancy = DORM_Never;
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AttackTarget = NULL;
    this->HitStopComponent = CreateDefaultSubobject<UHitStopComponent>(TEXT("HitStopComponent"));
    this->PushBackComponent = CreateDefaultSubobject<UPushBackComponent>(TEXT("PushBackComponent"));
    this->MotionWarpingComponent = CreateDefaultSubobject<UBreakerMotionWarpingComponent>(TEXT("MotionWarping"));
    this->ShakeComponent = CreateDefaultSubobject<UShakeComponent>(TEXT("ShakeComponent"));
    this->AttributeComponent = CreateDefaultSubobject<UCharacterAttributeComponent>(TEXT("AttributeContainer"));
    this->AKAudioComponent = CreateDefaultSubobject<UBreakerAkComponent>(TEXT("AK Audio Component"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->VoiceAkAudioComponent = CreateDefaultSubobject<UBreakerAkComponent>(TEXT("Voice Ak Audio Component"));
    this->MaterialStack = CreateDefaultSubobject<UMaterialStackComponent>(TEXT("MaterialStack"));
    this->EnemyLifeCycleComponent = CreateDefaultSubobject<UEnemyLifeCycleComponent>(TEXT("EnemyLifeCycleComponent"));
    this->InitialPushbackModifier = 1.00f;
    this->AgentType = ECharacterAgentType::Monster;
    this->LookAtDampening = 0.15f;
    this->LookAtMaxYaw = 90.00f;
    this->LookAtMaxPitch = 90.00f;
    this->DamageReactionType = EDamageReactionType::FullRange;
    this->DamageReactionModifier = 0;
    this->AnimHitReaction_Death = NULL;
    this->bParryAnimationRequiresPerfectParry = false;
    this->bGameplaySuperArmor = false;
    this->bSuppressHitReactsOnRapidHits = false;
    this->AnimInterruptThreshold = 0.25f;
    this->AnimInterruptFixedGap = 0.00f;
    this->bCharacterInHitReactionAlready = false;
    this->EnemyGroupID = -1;
    this->EnemyLevel = -1;
    this->bSpawnedByExtractionBeam = false;
    this->ExtractionKillPoints = 1;
    this->DangerPoints = -1;
    this->bCanBePushedAround = true;
    this->SuperArmorHitReactWeight = 0.25f;
    this->HitReactSkipTime = 0.20f;
    this->SmoothRotationAccel = -1.00f;
    this->SmoothRotationMaxSpeed = -1.00f;
    this->CharacterAudioData = NULL;
    this->AimingPitchForAnimAdjustmentInDegrees = 10.00f;
    this->MaterialRef = NULL;
    this->LastLocalAttacker = NULL;
    this->bHasTemporaryArmor = false;
    this->RadiusForEliteToKillSurroundingEnemiesOnDeath = 4000.00f;
    this->AKAudioComponent->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->ShakeComponent->SetupAttachment(RootComponent);
    this->VoiceAkAudioComponent->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

bool ACMCharBase::WillBeDefeatedByDamage(const FBreakerDamage& Damage) const {
    return false;
}

bool ACMCharBase::UsesStagger() {
    return false;
}

void ACMCharBase::UpdateJumpTarget(FVector NewTargetPosition) {
}

void ACMCharBase::UpdateEnemyLevel(int32 Level) {
}

void ACMCharBase::UpdateEnemyGroupAssociation() {
}

bool ACMCharBase::ToggleCrowdFollowingAvoidance(const bool bEnableCrowdFollowingAvoidance) {
    return false;
}

float ACMCharBase::TimestampOfLastStaggerRecovery() {
    return 0.0f;
}

void ACMCharBase::SurroundingEnemiesKilled_Implementation() {
}

void ACMCharBase::StopTelegraphSFX_ByCurrentActiveAttack_Implementation(const FName SocketName, const AkActionOnEventType OnStopActionType, const int32 OnStopFadeOutMs, const EAkCurveInterpolation OnStopFadeOutCurve) {
}

void ACMCharBase::SetSpawnLocation(const FVector& Location) {
}

void ACMCharBase::SetRootMotionScale(float Scale) {
}

void ACMCharBase::ServerSpawnProjectile_Implementation(TSubclassOf<AActor> ProjectileClass, const FTransform& SpawnTransform, AActor* ProjectileOwner, APawn* ProjectileInstigator, USceneComponent* HomingTarget) {
}

void ACMCharBase::PreAbilityCombatUsage() {
}

void ACMCharBase::PlayVoiceSFX_ByCurrentActiveAttack_Implementation(const float Delay) {
}

void ACMCharBase::PlayVoiceSFX_ByAttackName_Implementation(const float Delay, const FName AttackName) {
}

void ACMCharBase::PlayVoiceSFX_Implementation(const float Delay, const FGameplayTag GameplayTag, const EAudioVoiceType VoiceType) {
}

void ACMCharBase::PlayTelegraphSFX_ByCurrentActiveAttack_Implementation(const float Delay, const FName SocketName) {
}

void ACMCharBase::PlayTelegraphSFX_ByAttackName_Implementation(const float Delay, const FName SocketName, const FName AttackName) {
}

void ACMCharBase::PlayMuzzleFlashSFX_ByCurrentActiveAttack_Implementation(const float Delay, const bool bUseMainSFX_Socket) {
}

void ACMCharBase::PlayMuzzleFlashSFX_ByAttackName_Implementation(const float Delay, const bool bUseMainSFX_Socket, const FName AttackName) {
}

void ACMCharBase::PlayMuzzleFlashSFX_Implementation(const float Delay, const bool bUseMainSFX_Socket, const bool bOverrideDefaultGameplayTag, const FGameplayTag GameplayTagOverride) {
}

bool ACMCharBase::PlayJumpAnimation(UAnimMontage* Anim, FVector TargetPosition, float MidPointHeight, float JumpDuration, float MaximumAllowedError) {
    return false;
}

void ACMCharBase::PlayInterruptingAnimation(UAnimMontage* Anim, FName SectionName, FVector Impulse, float CustomMontagePlayRate, float StartTime, float DesiredWeight) {
}

bool ACMCharBase::PlayBehaviorAnimation(UAnimMontage* Anim, FName SectionName) {
    return false;
}

void ACMCharBase::OnTeleportStarted_Implementation() {
}

void ACMCharBase::OnTeleportFinished_Implementation() {
}


void ACMCharBase::OnRep_EnemyGroupId() {
}

void ACMCharBase::OnRep_ActiveTarget() {
}





void ACMCharBase::OnHidden_Implementation() {
}

void ACMCharBase::OnHealthDepleted_Implementation(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute) {
}

void ACMCharBase::OnControllerBlackboardInitialized(ACMCtrlBase* CMController, UBlackboardComponent* BlackboardComponent) {
}

void ACMCharBase::MulticastSpawnProjectile_Implementation(TSubclassOf<AActor> ProjectileClass, const FTransform& SpawnTransform, AActor* ProjectileOwner, APawn* ProjectileInstigator, USceneComponent* HomingTarget) {
}

void ACMCharBase::MULTICAST_LastEnemyInGroupKilled_Implementation(const FVector& DeathLocation) {
}


void ACMCharBase::KillSurroundingEnemies(float Radius) {
}

void ACMCharBase::K2_GetAKAudioComponent(UAkComponent*& Result) const {
}

bool ACMCharBase::IsStrafing_Implementation() const {
    return false;
}

bool ACMCharBase::IsStopping_Implementation() const {
    return false;
}

bool ACMCharBase::IsStaggered() const {
    return false;
}

bool ACMCharBase::IsSprinting_Implementation() const {
    return false;
}

bool ACMCharBase::IsPlayingMontage() const {
    return false;
}

bool ACMCharBase::IsMiniboss() const {
    return false;
}

bool ACMCharBase::IsInFuryMode() const {
    return false;
}

bool ACMCharBase::IsElite() const {
    return false;
}

bool ACMCharBase::IsDownedOrDefeated_Implementation() const {
    return false;
}

bool ACMCharBase::IsDowned_Implementation() const {
    return false;
}

bool ACMCharBase::IsDefeated_Implementation() const {
    return false;
}

bool ACMCharBase::IsDashing_Implementation() const {
    return false;
}

bool ACMCharBase::IsBoss() const {
    return false;
}

bool ACMCharBase::IsAITargetValid_Implementation(const AActor* Target) const {
    return false;
}

bool ACMCharBase::IsAiming_Implementation() const {
    return false;
}

bool ACMCharBase::HasTempInvincibility() const {
    return false;
}

bool ACMCharBase::HasSuperArmor() const {
    return false;
}

bool ACMCharBase::HasBeenDamagedWithin(float Seconds) const {
    return false;
}

void ACMCharBase::GiveTempInvincibility(float Seconds) {
}

TSubclassOf<ABreakerWeaponProp> ACMCharBase::GetWeaponClass_Implementation() const {
    return NULL;
}

float ACMCharBase::GetVerticalSpeed_Implementation() const {
    return 0.0f;
}

FVector ACMCharBase::GetUpDirection_Implementation() const {
    return FVector{};
}

FVector ACMCharBase::GetTravelVelocity_Implementation() const {
    return FVector{};
}

UEnemyStaggerInfo* ACMCharBase::GetStaggerInfo() const {
    return NULL;
}

FVector ACMCharBase::GetSpawnLocationAdjustment() {
    return FVector{};
}

FVector ACMCharBase::GetSpawnLocation() const {
    return FVector{};
}

float ACMCharBase::GetRootMotionScale() {
    return 0.0f;
}

float ACMCharBase::GetLookAtYaw() const {
    return 0.0f;
}

float ACMCharBase::GetLookAtPitch() const {
    return 0.0f;
}

AActor* ACMCharBase::GetLastPlayerToDamageMe(float WithinSeconds) const {
    return NULL;
}

FVector ACMCharBase::GetJumpTarget() const {
    return FVector{};
}

float ACMCharBase::GetHealthPercent() const {
    return 0.0f;
}

float ACMCharBase::GetHealth() const {
    return 0.0f;
}

FGameplayTagContainer ACMCharBase::GetEnemyTags() const {
    return FGameplayTagContainer{};
}

float ACMCharBase::GetAimYaw_Implementation() const {
    return 0.0f;
}

float ACMCharBase::GetAimPitch_Implementation() const {
    return 0.0f;
}

AActor* ACMCharBase::GetActiveTarget() const {
    return NULL;
}

void ACMCharBase::ExitFuryMode_Implementation() {
}

void ACMCharBase::ExecuteJumpAnimation(UAnimMontage* Anim, FVector TargetPosition, float MidPointHeight, float JumpDuration, float MaximumAllowedError, FLatentActionInfo LatentInfo) {
}

void ACMCharBase::ExecuteBehaviorAnimation(UAnimMontage* Anim, FName SectionName, FLatentActionInfo LatentInfo) {
}

void ACMCharBase::EnterFuryMode_Implementation() {
}

void ACMCharBase::EnemyLevelUpdated_Implementation() {
}

float ACMCharBase::DifferenceBetweenPawnAndControllerYaw() const {
    return 0.0f;
}

void ACMCharBase::DepictDamage_Multicast_Implementation(const AActor* Attacker, const FBreakerDamage& Damage, EBreakerDamageResponse Response) {
}


float ACMCharBase::CurrentStaggerValue() {
    return 0.0f;
}

void ACMCharBase::ConfigureCollision_Implementation(bool bCollisionEnabled) {
}

void ACMCharBase::ClearTempInvincibility() {
}

void ACMCharBase::ChangeLightStatus(bool bIsInLight) {
}

void ACMCharBase::CatchMontageNotifyEnd(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

void ACMCharBase::CatchMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

bool ACMCharBase::CanBeStaggered() const {
    return false;
}

bool ACMCharBase::CanBehave() const {
    return false;
}

bool ACMCharBase::CanBeExecuted() const {
    return false;
}

void ACMCharBase::BP_TeleportSucceded_Implementation() {
}




void ACMCharBase::BehaviorSound_Multicast_Implementation(USoundBase* Sound, FVector RelativeLocation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings) {
}

void ACMCharBase::BehaviorAnimation_Multicast_Implementation(UAnimMontage* Anim, FName SectionName) {
}

void ACMCharBase::ActiveTargetChanged_Implementation(AActor* NewTarget, float TimeSpentWithPrevTarget) {
}

void ACMCharBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACMCharBase, EnemyGroupID);
    DOREPLIFETIME(ACMCharBase, EnemyLevel);
    DOREPLIFETIME(ACMCharBase, bSpawnedByExtractionBeam);
    DOREPLIFETIME(ACMCharBase, DefaultWeaponGearbitTag);
    DOREPLIFETIME(ACMCharBase, StaggerValues);
    DOREPLIFETIME(ACMCharBase, ActiveTarget);
    DOREPLIFETIME(ACMCharBase, ActiveShields);
    DOREPLIFETIME(ACMCharBase, bHasTemporaryArmor);
}


