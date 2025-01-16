#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Kismet/GameplayStaticsTypes.h"
#include "Curves/CurveFloat.h"
#include "GameplayTagContainer.h"
#include "Attribute.h"
#include "AimArcConfig.h"
#include "AmpSummonParams.h"
#include "AnimNotifyStateInstanceData.h"
#include "BreakerDamage.h"
#include "CharacterCombatComboEvent.h"
#include "CharacterEquipmentDetails.h"
#include "ConditionalCombatEffectDesc.h"
#include "EAmpActivationStyle.h"
#include "EBreakerCameraType.h"
#include "ECombatActionResult.h"
#include "ECombatActionRoute.h"
#include "EDamageDetail.h"
#include "EHoldReleaseReason.h"
#include "EMeleeAttackState.h"
#include "EquipmentAttributes.h"
#include "EquipmentDetails.h"
#include "GenericGearInfo.h"
#include "OnEquipmentCanPerformSpecialChangedDelegate.h"
#include "OnEquipmentChargeReleasedDelegate.h"
#include "OnEquipmentEffectStackChangedDelegate.h"
#include "OnEquipmentGenericActivityDelegate.h"
#include "OnEquipmentHitScanDelegate.h"
#include "OnEquipmentSpecialChargeIncrementedDelegate.h"
#include "OnWeaponStatusEffectInfoChangedDelegate.h"
#include "RootMotionPlaySettings.h"
#include "Templates/SubclassOf.h"
#include "BreakerWeaponProp.generated.h"

class ABreakerAmpActor;
class ABreakerPawn;
class ABreakerPlayerController;
class ACMCharBase;
class APawn;
class IAttributeContainerInterface;
class UAttributeContainerInterface;
class UAnimInstance;
class UAnimMontage;
class UAnimNotifyState;
class UBreakerAnimInstance;
class UBreakerCamModifier;
class UBreakerWeaponEquipmentComponent;
class UCurveFloat;
class UMaterialInstanceDynamic;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class ABreakerWeaponProp : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerWeaponEquipmentComponent* EquipmentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GearTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultHiddenOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionalCombatEffectDesc> ConditionalCombatEffects;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentHitScan OnEquipmentHitScan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentSpecialChargeIncremented OnSpecialChargeIncremented;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentEffectStackChanged OnEquipmentEffectStackChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentCanPerformSpecialChanged OnEquipmentCanPerformSpecialChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform AttachLocalTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UAnimInstance>, TSubclassOf<UAnimInstance>> UpperBodyABPLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CustomAimCameraBlendOutCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListenForMontageNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalAnimationSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimMontage*, float> PerMontageAnimationSpeedModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalRootMotionDistanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimMontage*, float> PerMontageRootMotionDistanceModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DissolveParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportWeaponDissolve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCameraBlendForDissolve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAimingBlendForDissolve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponVisiblityCurveOverrideName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* NormalMeleeAttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NormalMeleeAttackSwapComboEntrySectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ExecutionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InAirMeleeAttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InAirDiveMeleeAttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SpecialMeleeAttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpecialMeleeChargeAttackIntroSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpecialMeleeChargeAttackOutSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DashMeleeAttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashMeleeAttackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashMeleeAttackTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AirDashMeleeAttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDamageDetail> JuicyTriggerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalAttackChargeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseSpecialDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSpecialCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerSpecialChargeMultiplierDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinWarmUpSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeIncrementSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FixedChargeIncrements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeoutSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve CameraDistanceModifierChargeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanActivateFinisherChargesOnAllWindows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAimArcConfig AimArcConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAmpActivationStyle AmpActivationStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AmpActivateAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTreatAmpActivateAnimationAsMelee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnAmpActiveActorAfterAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABreakerAmpActor> AmpActivateActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CompanionActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompanionActorPoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEquipmentDetails EquipmentDetails;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponStatusEffectInfoChanged OnWeaponStatusEffectInfoChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentGenericActivity OnEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentGenericActivity OnUnEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentChargeReleased OnChargeReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinalNormalChargeRatioReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterCombatComboEvent LastRecordedPhysicalDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBreakerCamModifier> DefaultMeleeLethalCamModifier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentGenericActivity OnAmpTriggered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GearData, meta=(AllowPrivateAccess=true))
    FGameplayTag RepGearTag;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECombatActionRoute MostRecentActionRoute;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECombatActionRoute, ECombatActionResult> CombatActionOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPredictProjectilePathResult LatestAimPathResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayingThrowAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bArcAiming;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemEquipped, meta=(AllowPrivateAccess=true))
    bool bIsItemEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InUse, meta=(AllowPrivateAccess=true))
    bool bInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CompanionActorPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InUseCompanions;
    
public:
    ABreakerWeaponProp(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WeaponShow(ABreakerPawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WeaponPropWillUnspawn(ABreakerPawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WeaponPropWasSpawned(ABreakerPawn* PawnIfPlayer, ACMCharBase* PawnIfNPC);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WeaponHide(ABreakerPawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UsesAimArc() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseMultiTrace() const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateOwnerAmpCharge();
    
    UFUNCTION(BlueprintCallable)
    void TriggerOnEquipmentEffectStackChanged(int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    void TriggerOnEquipmentCanPerformSpecialChanged(bool bCanPerform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float SpecialChargeTimeElapsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float SpecialChargeProgress() const;
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponDissolveAmount(float Amount, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetFinalSpecialChargeProgress(float ChargeProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetFinalSpecialChargeLevel(int32 ChargeLevel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetWeaponStatusEffectTag(FGameplayTag NewStatusEffectTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_NormalAttackChargeEnded(float FinalChargeRatio, ECombatActionResult TargetAction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_NormalAttackChargeBegan(float ChargeDuration, ECombatActionResult TargetAction);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_ManageCompanionActor(AActor* CompanionActor, bool bRelease);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReturnCompanionActor(AActor* CompanionActor, bool bForceTriggerOnClients);
    
    UFUNCTION(BlueprintCallable)
    void ResetSpecialCharge();
    
    UFUNCTION(BlueprintCallable)
    AActor* ReleaseCompanionActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWeaponProjectileImpact(const FBreakerDamage& Damage, APawn* DamageInstigator, APawn* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWeaponImpact(const FBreakerDamage& Damage, APawn* DamageInstigator, APawn* Target);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWeaponDataTableChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponCompletedDissolve();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartSpecialAttack(ABreakerPawn* Caller);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartedArcAiming();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpecialChargeReleased(ABreakerPawn* Caller, float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpecialChargeInterrupted(ABreakerPawn* Caller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpecialChargeIncrementProgress(int32 IncrementLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpecialChargeBegin(ABreakerPawn* Caller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlamActionEnd(UAnimMontage* TriggerMontage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlamActionBegin(UAnimMontage* TriggerMontage);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemEquipped();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InUse();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GearData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReleasedSpecialAttack(ABreakerPawn* Caller, EHoldReleaseReason Reason);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedMontageNotifyEnd(FName NotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedMontageNotifyBegin(FName NotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedMontageCompleted(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayNormalAttack(ABreakerPawn* Caller, EMeleeAttackState attackType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNormalChargeReleased(float FinalChargeRatio, ECombatActionResult TargetAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNormalChargeProgress(float ChargeRatio, ECombatActionResult TargetAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNormalChargeInterrupted(ECombatActionResult TargetAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNormalChargeBegan(float MaxDuration, ECombatActionResult TargetAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJuicyStrikeLanded(const FBreakerDamage& Damage, AActor* Victim);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedArcAiming();
    
    UFUNCTION(BlueprintCallable)
    void OnEquipmentDetailsChanged(FCharacterEquipmentDetails CharacterEquipmentDetails);
    
    UFUNCTION(BlueprintCallable)
    void OnCutsceneStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCompanionActorReturned(AActor* CompanionActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCompanionActorReleased(AActor* CompanionActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCadenceFeedback(ABreakerPawn* Caller, float TimeDifferential, float MinTime, float MaxTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBPApplyGearData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttackCadenceBoost(ABreakerPawn* Caller, float Bonus, float MaxBonus);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAmpSegmentsChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateAmpMontageSectionReached(UAnimMontage* Montage, FName PrevSection, FName NewSection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateAmp();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetWeaponStatusEffectTag(FGameplayTag NewStatusEffectTag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MULTICAST_NormalAttackChargeEnded(float FinalChargeRatio, ECombatActionResult TargetAction);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MULTICAST_NormalAttackChargeBegan(float ChargeDuration, ECombatActionResult TargetAction);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MULTICAST_ManageCompanionActor(AActor* CompanionActor, bool bRelease);
    
    UFUNCTION(BlueprintCallable)
    void MontageSectionChanged(UAnimMontage* Montage, FName PrevSection, FName NewSection);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponShowing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsPerformingSpecialAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChargingSpecial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChargingNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAmp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWeaponStatusEffectInfo(FGameplayTag& WeaponStatusEffectTag, int32& WeaponStatusEffectLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<USkeletalMeshComponent*> GetUsedSkeletalMeshComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACMCharBase* GetNpcPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetModifiedFireRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMeleeDashTargetDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMeleeDashDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxChargeSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGenericGearInfo(FGenericGearInfo& GenericGearInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEquipmentDetails GetGearData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEquipmentAttributes GetGearAttributes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFinalSpecialChargeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFinalSpecialChargeProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFinalChargeLevelReached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMaterialInstanceDynamic*> GetDynamicMaterialInstances();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetCurrentEffectStackCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerPlayerController* GetCharacterPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerPawn* GetCharacterPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBatteryGainedPerHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetBaseMoveSpeedModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRootMotionPlaySettings GetAnimationModifersForMontage(UAnimMontage* Montage, UPARAM(Ref) FRootMotionPlaySettings& InOutPlaySettings) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FAmpSummonParams GetAmpSummonParams();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TMap<TSubclassOf<UAnimNotifyState>, FAnimNotifyStateInstanceData> GetAmpActivateAnimationInstanceData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetAimMoveSpeedModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EBreakerCameraType GetAimCameraStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBreakerAnimInstance* GetActiveAnimInstance() const;
    
    UFUNCTION(BlueprintCallable)
    static void GeneratePredictedAimArcPath(AActor* SourceActor, FRotator ActorRotation, FRotator ControlRotation, EBreakerCameraType AimStyle, const FAimArcConfig& ArcConfig, FRotator& OutRotation, FPredictProjectilePathResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRuntimeFloatCurve GenerateDamageFalloffCurve() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DrawThrowArc();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawAimArcVisualization(const FPredictProjectilePathResult& PathResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearAimArcVisualization();
    
    UFUNCTION(BlueprintCallable)
    void CatchMontageNotifyEnd(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
    UFUNCTION(BlueprintCallable)
    void CatchMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
    UFUNCTION(BlueprintCallable)
    void CatchMontageCompleted(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanTransitionToSpecial(ECombatActionResult Action, bool bGrounded) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float CalculateBaseStagger(const TArray<EDamageDetail>& DamageDetails) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float CalculateBaseDamage(const TArray<EDamageDetail>& DamageDetails) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AnimInstanceChanged(UAnimInstance* OldInstance, UAnimInstance* NewInstance);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateReload();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ActivateAmp_Server(FAmpSummonParams SummonParams, bool bIsDeferredSpawn);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ActivateAmp_Multicast(FAmpSummonParams SummonParams);
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateAmp();
    
};

