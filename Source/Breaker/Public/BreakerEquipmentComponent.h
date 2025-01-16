#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "AimArcConfig.h"
#include "ECharacterEquipmentSlot.h"
#include "ECombatActionResult.h"
#include "ECombatActionRoute.h"
#include "EEquipmentType.h"
#include "EHoldReleaseReason.h"
#include "EInputActivationType.h"
#include "GenericGearInfo.h"
#include "GenericGearInfo_RPC.h"
#include "OnGearActivationChangedDelegate.h"
#include "BreakerEquipmentComponent.generated.h"

class ABreakerMod;
class ABreakerPawn;
class ABreakerWeaponProp;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBreakerEquipmentComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveAnimationLock;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGearActivationChanged OnGearActivationChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECombatActionRoute, ECombatActionResult> CombatActionOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECombatActionRoute, FGameplayTag> QuantityAttributePerAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAimArcConfig AimArcConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputActivationType InputActivationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGenericGearInfo_RPC SyncedGearInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABreakerPawn* CachedBreakerPawnOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABreakerWeaponProp* CachedWeaponPropOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABreakerMod* CachedHolobyteOwner;
    
public:
    UBreakerEquipmentComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UsesAimArc() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartCustomActionCooldownTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStatusEffectInfo(FGameplayTag EffectTag, const int32 EffectLevel, FGameplayTag EffectModTag, const int32 OverrideStackCount);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriggerReleased(ABreakerPawn* Caller, const EHoldReleaseReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriggerPressed(ABreakerPawn* Caller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrimaryAction(ABreakerPawn* Caller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLightAttackReleased(ABreakerPawn* Caller, const EHoldReleaseReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLightAttackPressed(ABreakerPawn* Caller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeavyAttackReleased(ABreakerPawn* Caller, const EHoldReleaseReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeavyAttackPressed(ABreakerPawn* Caller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquipmentComponentDataSet();
    
    UFUNCTION(BlueprintCallable)
    void OnCustomActionCooldownTimerEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAmpAttackReleased(ABreakerPawn* Caller, const EHoldReleaseReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAmpAttackPressed(ABreakerPawn* Caller);
    
public:
    UFUNCTION(BlueprintCallable)
    void ModifyRemainingCustomActionCooldownTime(const float Scalar, const float Constant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGearActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetWeaponProp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetStatusEffectTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerMod* GetHolobyte() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGenericGearInfo GetGenericGearInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterEquipmentSlot GetEquippedInSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEquipmentType GetEquipmentType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCustomActionCooldownTimeRemainingRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerPawn* GetBreakerPawn() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DEBUG_OverrideAffixMods(const TMap<FGameplayTag, int32>& NewAffixMods);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanEquip(const ECombatActionRoute ActionRoute) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelCustomActionCooldown();
    
};

