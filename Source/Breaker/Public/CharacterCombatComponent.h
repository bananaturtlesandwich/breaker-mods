#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "GameplayTagContainer.h"
#include "Attribute.h"
#include "BreakerDamage.h"
#include "BreakerPawnLocalInputHandler.h"
#include "CharacterCombatActionQueuedDelegate.h"
#include "CharacterCombatActivityEvent.h"
#include "CharacterCombatComboEvent.h"
#include "CharacterCombatEquipmentChangedDelegate.h"
#include "CharacterCombatEquipmentInfusedDelegate.h"
#include "DashEventParams.h"
#include "ECharacterCombatActivityEventType.h"
#include "ECharacterEquipmentSlot.h"
#include "ECombatActionResult.h"
#include "ECombatActionRoute.h"
#include "EEquipmentType.h"
#include "ELevelState.h"
#include "GenericGearInfo.h"
#include "GenericGearInfo_RPC.h"
#include "HitStopDetails.h"
#include "OnAmpActivatedEventDelegate.h"
#include "OnCharacterCombatActivityEventDelegate.h"
#include "OnCharacterCombatComboEventDelegate.h"
#include "OnCharacterCombatEnergyGrantedDelegate.h"
#include "OnWeaponAirDiveGrounSlamDelegate.h"
#include "OnWeaponCadenceEventDelegate.h"
#include "PlayerComponentBase.h"
#include "SimpleParryEventDelegate.h"
#include "SummonedCompanionEventDelegate.h"
#include "SummonedCompanionGroup.h"
#include "SummonedCompanionGroupEventDelegate.h"
#include "SummonedCompanionInfo.h"
#include "Templates/SubclassOf.h"
#include "CharacterCombatComponent.generated.h"

class AActor;
class ABreakerMod;
class ABreakerPawn;
class ABreakerWeaponProp;
class IAttributeContainerInterface;
class UAttributeContainerInterface;
class UAnimInstance;
class UAnimMontage;
class UAnimSequenceBase;
class UBreakerCamModifier;
class UBreakerCombatEffect;
class UBreakerEquipmentComponent;
class UCharacterCombatComponent;
class UCharacterCombatData;
class UHitscanGunComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UCharacterCombatComponent : public UPlayerComponentBase, public IBreakerPawnLocalInputHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterCombatActionQueued OnActionQueued;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterCombatEquipmentChanged OnEquipmentChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterCombatEquipmentInfused OnEquipmentInfused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleParryEvent OnAttackParried;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParryRetaliationPlaybackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ParrySuccessHasInvincibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplitAttackButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGearDropsShouldFillEmptyMeleeSlotsFirst;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponAirDiveGrounSlam OnAirDiveGroundSlam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterCombatActivityEventType, float> CombatOrbCostPerActivity;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterCombatEnergyGranted OnEnergyGranted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCombatEnergyUpgradeLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterCombatEnergyGranted OnEnergyUpgradePointsGranted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterCombatEnergyGranted OnEnergyUpgradeGranted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSummonedCompanionGroupEvent OnCompanionGroupChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSummonedCompanionEvent OnCompanionLifetimeExpire;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSummonedCompanionEvent OnCompanionRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSummonedCompanionEvent OnCompanionUnregistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponCadenceEvent OnWeaponCadenceEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CompanionGroups, meta=(AllowPrivateAccess=true))
    TArray<FSummonedCompanionGroup> CompanionGroups;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterCombatData* CombatData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaskedHoldDurationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaskedHoldDurationForgivenessThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRawHoldUltraForgiveness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSkipToFinisherNormalCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RawHoldDurationForgivenessThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CadenceDamageTimeWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve NormalComboCadenceBonusCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SpecialLinkCadenceBonusCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecialLinkInterruptTimeWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSwapComboLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BalancedSwapComboTimeoutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DualSwapComboTimeoutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HeavySwapComboTimeoutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ForceSwapComboTimeoutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SkillSwapComboTimeoutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BufferedInputDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBreakerCombatEffect> SwapComboGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBreakerCombatEffect> CounterStrikeGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBreakerCombatEffect> LinkableStrikeGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitStopDetails SwapComboBaseHitstopDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwapComboDurationBoostPerStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerfectDodgeComboLinkerTimeoutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerfectDodgeCounterStrikeHitstopDurationModifier;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterCombatComboEvent OnComboEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterCombatActivityEvent OnActivityEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAmpActivatedEvent OnAmpActivatedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LostHealthToRecoverHealthFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurstDamageToRecoverHealthFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealthRecoveredFromBurstDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoverHealthDecayDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoverHealthDecayPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootSlideVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootSlideDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlootSlideMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashAttackConversionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBreakerCamModifier> AirAttackCameraModifier;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WieldedSlot, meta=(AllowPrivateAccess=true))
    ECharacterEquipmentSlot WieldedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_EquipmentComponentArray, meta=(AllowPrivateAccess=true))
    TArray<UBreakerEquipmentComponent*> EquippedComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimSequenceBase*, int32> ActiveComboBuffers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PreSpawnedGear, meta=(AllowPrivateAccess=true))
    TArray<ABreakerWeaponProp*> PreSpawnedGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABreakerMod*> PreSpawnedHolobytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ABreakerWeaponProp* ProjectileDeflector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* DashAttackTargetEvaluator;
    
public:
    UCharacterCombatComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnregisterCompanion(AActor* Companion);
    
    UFUNCTION(BlueprintCallable)
    void UnequipGearFromSlot(ECharacterEquipmentSlot EquipmentSlot);
    
    UFUNCTION(BlueprintCallable)
    void UnequipGearByGuid(FGuid GearGuid);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetWieldedSlot(ECharacterEquipmentSlot NewWieldedSlot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveAllGear();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_EquipNewHolobyte(const FGameplayTag GearTag, const FGenericGearInfo_RPC GearInfo, ECharacterEquipmentSlot EquipmentSlot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_EquipNewGear(const FGameplayTag GearTag, const FGenericGearInfo_RPC GearInfo, ECharacterEquipmentSlot EquipmentSlot);
    
public:
    UFUNCTION(BlueprintCallable)
    bool RollForCriticalDamage(AActor* Attacker, AActor* Target, FBreakerDamage Damage);
    
    UFUNCTION(BlueprintCallable)
    void ResetQuickRecoverHealthDecayTimer(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ResetCombatEnergyLevels();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveCompanionGroup(const FGameplayTag& GroupTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllGear();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterCompanion(const FGameplayTag& GroupTag, const FSummonedCompanionInfo& CompanionInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegenerateDefaultSycomGear(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute);
    
    UFUNCTION(BlueprintCallable)
    void QuickRecoverHealth_OnHealthChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_WieldedSlot();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PreSpawnedGear(const TArray<ABreakerWeaponProp*>& PreviousValues);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_EquipmentComponentArray(TArray<UBreakerEquipmentComponent*> OldEquippedComponents);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CompanionGroups();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNormalChargeReleased(ABreakerWeaponProp* WeaponProp, ECombatActionResult Action, float FillRatio);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDashComplete(FDashEventParams DashEventParams);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDashBegan(FDashEventParams DashEventParams);
    
    UFUNCTION(BlueprintCallable)
    void OnBladeSpecialIncrementProgress(ABreakerWeaponProp* Weapon, int32 ChargeLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAmpTriggered(ABreakerWeaponProp* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnAmpActivated(ABreakerWeaponProp* Weapon);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_UnregisteredCompanion(const FSummonedCompanionInfo CompanionInfo);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetWieldedSlot(ECharacterEquipmentSlot NewWieldedSlot);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_RegisteredCompanion(const FSummonedCompanionInfo CompanionInfo);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_EquipNewGear(const FGameplayTag GearTag, const FGenericGearInfo_RPC GearInfo, ECharacterEquipmentSlot EquipmentSlot);
    
public:
    UFUNCTION(BlueprintCallable)
    void MontageSectionChanged(UAnimMontage* Montage, FName PrevSection, FName NewSection);
    
private:
    UFUNCTION(BlueprintCallable)
    void ModifySavedLoadoutOnEquipmentChanged(ECharacterEquipmentSlot EquipmentSlot, FGenericGearInfo OldGearInfo, FGenericGearInfo NewGearInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkPreciseInputWindow(float WindowDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingGroundCombo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCombo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGearEquipped(const FGenericGearInfo& GearInfo, ECharacterEquipmentSlot& OutEquipmentSlot, EEquipmentType& OutEquipmentType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompanion(AActor* actorToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPrecisionInput() const;
    
    UFUNCTION(BlueprintCallable)
    void GrantCombatEnergyUpgradePoints(int32 Points, bool bFromTable);
    
    UFUNCTION(BlueprintCallable)
    void GrantCombatEnergy(float Points);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetWieldedGear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBreakerEquipmentComponent* GetWieldedEquipmentComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetWeaponForDamage(const FBreakerDamage& Damage, bool bPreferActiveEquipedWeapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetSpecificPrespawnedGear(TSubclassOf<ABreakerWeaponProp> GearClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerMod* GetHolobyteBySlot(ECharacterEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetEquippedRail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetEquippedKit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetEquippedHoverboard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetEquippedDash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetEquippedCustomActionB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetEquippedCustomActionA() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetEquippedBlade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetEquippedAmp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEquipmentType GetEquipmentTypeForEquipmentSlot(const ECharacterEquipmentSlot EquipmentSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterEquipmentSlot GetEquipmentSlotForEquipmentType(const EEquipmentType EquipmentType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterEquipmentSlot GetEquipmentSlotForDamage(const FBreakerDamage& Damage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEquipmentCooldownTimeRemainingRatio(const ECombatActionRoute ActionRoute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBreakerEquipmentComponent* GetEquipmentComponentForDamage(const FBreakerDamage& Damage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBreakerEquipmentComponent* GetEquipmentComponentBySlot(ECharacterEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetEquipmentByType(EEquipmentType EquipmentType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetEquipmentBySlot(ECharacterEquipmentSlot Slot) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHitscanGunComponent* GetDeflectionHitscanGun() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCompanionGroup(const FGameplayTag& GroupTag, FSummonedCompanionGroup& OutGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetComboNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCombatEnergyUpgradeInfo(int32& OutTotalItemsFound, int32& OutTotalItemsNeeded) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCombatEnergyOrbSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCombatEnergyMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCombatEnergy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllEquippedStatusEffects(TArray<FGameplayTag>& OutEffects) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllCompanions(TArray<AActor*>& OutCompanions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECombatActionRoute GetActionRouteForEquipmentSlot(const ECharacterEquipmentSlot EquipmentSlot) const;
    
    UFUNCTION(BlueprintCallable)
    void EquipHolobyteByTag(FGameplayTag HolobyteTag, FGenericGearInfo GearInfo, ECharacterEquipmentSlot ForcedEquipmentSlot);
    
    UFUNCTION(BlueprintCallable)
    void EquipGearByTag(FGameplayTag GearTag, FGenericGearInfo GearInfo, ECharacterEquipmentSlot ForcedEquipmentSlot);
    
    UFUNCTION(BlueprintCallable)
    void DeductCombatEnergy(float Points);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeQuickRecoverHealthForDamageDealt(float Damage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CombatEnergy_OnLevelChanged(ELevelState NewLevel, ELevelState OldLevel);
    
    UFUNCTION(BlueprintCallable)
    void CombatEnergy_OnEnergyUpgradeChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute);
    
    UFUNCTION(BlueprintCallable)
    void CombatEnergy_OnEnergyChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute);
    
    UFUNCTION(BlueprintCallable)
    void CombatEnergy_OnComboEvent(UCharacterCombatComponent* CombatComponent, FCharacterCombatComboEvent Event);
    
    UFUNCTION(BlueprintCallable)
    void CombatEnergy_OnCombatActivityEvent(UCharacterCombatComponent* CombatComponent, FCharacterCombatActivityEvent Event);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearPreciseInputWindow();
    
private:
    UFUNCTION(BlueprintCallable)
    void CatchReceivedDamage(ABreakerPawn* Caller, AActor* Source, FBreakerDamage Damage);
    
public:
    UFUNCTION(BlueprintCallable)
    void CatchMontageCompleted(UAnimMontage* Montage, bool bInterrupted);
    
private:
    UFUNCTION(BlueprintCallable)
    void CatchInflictedDamage(ABreakerPawn* Caller, AActor* Victim, FBreakerDamage Damage);
    
public:
    UFUNCTION(BlueprintCallable)
    void AnimInstanceChanged(AActor* Actor, UAnimInstance* OldInstance, UAnimInstance* NewInstance);
    

    // Fix for true pure virtual functions not being implemented
};

