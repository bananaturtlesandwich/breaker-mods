#pragma once
#include "CoreMinimal.h"
#include "AkActionOnEventType.h"
#include "EAkCurveInterpolation.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameFramework/Character.h"
#include "Engine/LatentActionManager.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "Attribute.h"
#include "AttributeComponentInterface.h"
#include "AttackTargetOwner.h"
#include "AudioDamageInterface.h"
#include "AudioEventsCollection.h"
#include "BreakerDamage.h"
#include "BreakerDamageable.h"
#include "CMCharDefeatedEventDelegate.h"
#include "CMCharDepictDamageEventDelegate.h"
#include "CMCharFuryEventDelegate.h"
#include "CMCharParryEventDelegate.h"
#include "CMCharPoolEventDelegate.h"
#include "CMCharStaggerEventDelegate.h"
#include "CharacterAgentInterface.h"
#include "CharacterAudioInterface.h"
#include "CharacterMovementParams.h"
#include "EAudioVoiceType.h"
#include "EBreakerDamageResponse.h"
#include "ECharacterAgentType.h"
#include "EDamageReactionType.h"
#include "EDamageStrengthType.h"
#include "EnemyHitReactMontageSet.h"
#include "EnemyHitReactStunMontageSet.h"
#include "PawnAudioInterface.h"
#include "PoolInterface.h"
#include "StaggerLocalPrediction.h"
#include "Templates/SubclassOf.h"
#include "CMCharBase.generated.h"

class AActor;
class ABreakerWeaponProp;
class ACMCtrlBase;
class APawn;
class IAttributeContainerInterface;
class UAttributeContainerInterface;
class UAkComponent;
class UAnimMontage;
class UAttackTargetComponent;
class UBlackboardComponent;
class UBreakerAkComponent;
class UBreakerCharAudioDataBase;
class UBreakerMotionWarpingComponent;
class UBreakerSentinelComponent;
class UCharacterAttributeComponent;
class UEnemyLifeCycleComponent;
class UEnemyStaggerInfo;
class UHitStopComponent;
class UMaterialInstanceDynamic;
class UMaterialStackComponent;
class UPrimitiveComponent;
class UPushBackComponent;
class USceneComponent;
class UShakeComponent;
class USoundAttenuation;
class USoundBase;
class USoundConcurrency;

UCLASS(Abstract, Blueprintable)
class BREAKER_API ACMCharBase : public ACharacter, public IBreakerDamageable, public IGameplayTagAssetInterface, public IPawnAudioInterface, public ICharacterAudioInterface, public IAudioDamageInterface, public IAttackTargetOwner, public ICharacterAgentInterface, public IAttributeComponentInterface, public IPoolInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttackTargetComponent* AttackTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitStopComponent* HitStopComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPushBackComponent* PushBackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerMotionWarpingComponent* MotionWarpingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShakeComponent* ShakeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterAttributeComponent* AttributeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerAkComponent* AKAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerAkComponent* VoiceAkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMaterialStackComponent* MaterialStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyLifeCycleComponent* EnemyLifeCycleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialPushbackModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EnemyArchetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EnemyConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAgentType AgentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtDampening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtMaxYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtMaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageReactionType DamageReactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageReactionModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyHitReactMontageSet FlinchHitReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyHitReactMontageSet LightHitReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyHitReactMontageSet MediumHitReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyHitReactMontageSet StrongHitReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyHitReactStunMontageSet StunHitReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimHitReaction_Death;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bParryAnimationRequiresPerfectParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimMontage*, UAnimMontage*> AnimHitReactions_AttackToParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGameplaySuperArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressHitReactsOnRapidHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimInterruptThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimInterruptFixedGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCharacterInHitReactionAlready;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> DamageableColliders;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnemyGroupId, meta=(AllowPrivateAccess=true))
    int32 EnemyGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 EnemyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSpawnedByExtractionBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtractionKillPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HiddenLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DangerPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBePushedAround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuperArmorHitReactWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDamageStrengthType, float> DamageKnockbackDistanceStrengthMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<APawn>> CustomTargetableClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultWeaponGearbitTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StatusEffectToApplyOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastDamageImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastDirectionToAttacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitReactSkipTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FStaggerLocalPrediction StaggerValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform CachedMeshTransform;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCMCharDefeatedEvent OnDefeated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCMCharPoolEvent OnCreatedInPool;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCMCharPoolEvent OnReInitFromPool;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCMCharPoolEvent OnRetireToPool;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCMCharParryEvent OnAttackParried;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCMCharStaggerEvent OnStaggerStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCMCharFuryEvent OnFuryStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCMCharDepictDamageEvent OnDepictDamageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothRotationAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothRotationMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBreakerCharAudioDataBase* CharacterAudioData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMovementParams MovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingPitchForAnimAdjustmentInDegrees;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialRef;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerDamage LastReceivedDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastLocalAttacker;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveTarget, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ActiveTarget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBreakerSentinelComponent*> ActiveShields;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bHasTemporaryArmor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusForEliteToKillSurroundingEnemiesOnDeath;
    
    ACMCharBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WillBeDefeatedByDamage(const FBreakerDamage& Damage) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UsesStagger();
    
    UFUNCTION(BlueprintCallable)
    void UpdateJumpTarget(FVector NewTargetPosition);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEnemyLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEnemyGroupAssociation();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ToggleCrowdFollowingAvoidance(const bool bEnableCrowdFollowingAvoidance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float TimestampOfLastStaggerRecovery();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SurroundingEnemiesKilled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopTelegraphSFX_ByCurrentActiveAttack(const FName SocketName, const AkActionOnEventType OnStopActionType, const int32 OnStopFadeOutMs, const EAkCurveInterpolation OnStopFadeOutCurve);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetRootMotionScale(float Scale);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSpawnProjectile(TSubclassOf<AActor> ProjectileClass, const FTransform& SpawnTransform, AActor* ProjectileOwner, APawn* ProjectileInstigator, USceneComponent* HomingTarget);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PreAbilityCombatUsage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayVoiceSFX_ByCurrentActiveAttack(const float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayVoiceSFX_ByAttackName(const float Delay, const FName AttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayVoiceSFX(const float Delay, const FGameplayTag GameplayTag, const EAudioVoiceType VoiceType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayTelegraphSFX_ByCurrentActiveAttack(const float Delay, const FName SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayTelegraphSFX_ByAttackName(const float Delay, const FName SocketName, const FName AttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayMuzzleFlashSFX_ByCurrentActiveAttack(const float Delay, const bool bUseMainSFX_Socket);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayMuzzleFlashSFX_ByAttackName(const float Delay, const bool bUseMainSFX_Socket, const FName AttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayMuzzleFlashSFX(const float Delay, const bool bUseMainSFX_Socket, const bool bOverrideDefaultGameplayTag, const FGameplayTag GameplayTagOverride);
    
    UFUNCTION(BlueprintCallable)
    bool PlayJumpAnimation(UAnimMontage* Anim, FVector TargetPosition, float MidPointHeight, float JumpDuration, float MaximumAllowedError);
    
    UFUNCTION(BlueprintCallable)
    void PlayInterruptingAnimation(UAnimMontage* Anim, FName SectionName, FVector Impulse, float CustomMontagePlayRate, float StartTime, float DesiredWeight);
    
    UFUNCTION(BlueprintCallable)
    bool PlayBehaviorAnimation(UAnimMontage* Anim, FName SectionName);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnTeleportStarted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnTeleportFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuccessfulHit();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnemyGroupId();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveTarget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedMontageNotifyEnd(FName NotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedMontageNotifyBegin(FName NotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProjectileSpawned(AActor* Projectile, USceneComponent* HomingTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLightStatusChanged(bool bIsLit);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHealthDepleted(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnControllerBlackboardInitialized(ACMCtrlBase* CMController, UBlackboardComponent* BlackboardComponent);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSpawnProjectile(TSubclassOf<AActor> ProjectileClass, const FTransform& SpawnTransform, AActor* ProjectileOwner, APawn* ProjectileInstigator, USceneComponent* HomingTarget);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MULTICAST_LastEnemyInGroupKilled(const FVector& DeathLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LastEnemyInGroupKilled(const FVector& DeathLocation);
    
    UFUNCTION(BlueprintCallable)
    void KillSurroundingEnemies(float Radius);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void K2_GetAKAudioComponent(UAkComponent*& Result) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsStrafing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsStopping() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStaggered() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsSprinting() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMiniboss() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInFuryMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsElite() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsDownedOrDefeated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsDowned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsDefeated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsDashing() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBoss() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsAITargetValid(const AActor* Target) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsAiming() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTempInvincibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSuperArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenDamagedWithin(float Seconds) const;
    
    UFUNCTION(BlueprintCallable)
    void GiveTempInvincibility(float Seconds);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TSubclassOf<ABreakerWeaponProp> GetWeaponClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetVerticalSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetUpDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetTravelVelocity() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEnemyStaggerInfo* GetStaggerInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSpawnLocationAdjustment();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSpawnLocation() const;
    
    UFUNCTION(BlueprintCallable)
    float GetRootMotionScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLookAtYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLookAtPitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLastPlayerToDamageMe(float WithinSeconds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetJumpTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetEnemyTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetAimYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetAimPitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActiveTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitFuryMode();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void ExecuteJumpAnimation(UAnimMontage* Anim, FVector TargetPosition, float MidPointHeight, float JumpDuration, float MaximumAllowedError, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void ExecuteBehaviorAnimation(UAnimMontage* Anim, FName SectionName, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterFuryMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnemyLevelUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float DifferenceBetweenPawnAndControllerYaw() const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void DepictDamage_Multicast(const AActor* Attacker, const FBreakerDamage& Damage, EBreakerDamageResponse Response);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DepictDamage(const AActor* Attacker, const FBreakerDamage& Damage, bool LocalSource);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CurrentStaggerValue();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConfigureCollision(bool bCollisionEnabled);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearTempInvincibility();
    
    UFUNCTION(BlueprintCallable)
    void ChangeLightStatus(bool bIsInLight);
    
protected:
    UFUNCTION()
    void CatchMontageNotifyEnd(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
    UFUNCTION()
    void CatchMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeStaggered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBehave() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeExecuted() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_TeleportSucceded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTeleportStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTeleportFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHidden();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void BehaviorSound_Multicast(USoundBase* Sound, FVector RelativeLocation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void BehaviorAnimation_Multicast(UAnimMontage* Anim, FName SectionName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActiveTargetChanged(AActor* NewTarget, float TimeSpentWithPrevTarget);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetAudioEventCollection(FAudioEventsCollection& Collection) const override PURE_VIRTUAL(K2_GetAudioEventCollection,);
    
    UFUNCTION(BlueprintCallable)
    bool GetAttributeComponent(TScriptInterface<IAttributeContainerInterface>& Result) override PURE_VIRTUAL(GetAttributeComponent, return false;);
    
};

