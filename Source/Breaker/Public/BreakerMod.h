#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "AttributeModifier.h"
#include "BreakerAttackReport.h"
#include "BreakerDamage.h"
#include "DamageGroup.h"
#include "EEquipmentType.h"
#include "EModTriggerState.h"
#include "ModInfo.h"
#include "ModSpecializationInfo.h"
#include "OnModTriggerStateChangedDelegate.h"
#include "TaggedPropertiesInterface.h"
#include "BreakerMod.generated.h"

class ABreakerPawn;
class ABreakerWeaponProp;
class ACMCharBase;
class ASyCom;
class UBreakerHolobyteEquipmentComponent;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class BREAKER_API ABreakerMod : public AActor, public ITaggedPropertiesInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerHolobyteEquipmentComponent* EquipmentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RewardTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModInfo ModInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ModTag, meta=(AllowPrivateAccess=true))
    FGameplayTag ModTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModTriggerStateChanged OnModInfoChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ModStackSize, meta=(AllowPrivateAccess=true))
    int32 ModStackSize;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModTriggerStateChanged OnStackSizeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AssociatedIcons, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> AssociatedIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpecializationInfo, meta=(AllowPrivateAccess=true))
    FModSpecializationInfo SpecializationInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModTriggerStateChanged OnAssociatedIconsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModTriggerStateChanged OnSpecializationChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModTriggerStateChanged OnTriggerStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModTriggerStateChanged OnMeterChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EModTriggerState TriggerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ModMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsApplied, meta=(AllowPrivateAccess=true))
    bool bIsApplied;
    
public:
    ABreakerMod(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TriggerSpecializationChangedDelegates();
    
    UFUNCTION(BlueprintCallable)
    void TriggerInstant();
    
    UFUNCTION(BlueprintCallable)
    void TriggerAssociatedIconsChangedDelegates();
    
    UFUNCTION(BlueprintCallable)
    void SetTriggerState(EModTriggerState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetModMeter(float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RetireModOnCMChar(ACMCharBase* CMChar);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveModFromWeapon(ABreakerWeaponProp* Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveModFromSyCom(ASyCom* SyCom);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveModFromPawn(ABreakerPawn* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveModFromCMChar(ACMCharBase* CMChar);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReInitModOnCMChar(ACMCharBase* CMChar);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SpecializationInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ModTag();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ModStackSize();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsApplied();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AssociatedIcons();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerUseKit(ABreakerPawn* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerStartSpecial(ABreakerPawn* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerShoot(ABreakerPawn* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerHealthLost(ABreakerPawn* Player, const FBreakerAttackReport& AttackInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerEndSpecial(ABreakerPawn* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModStackSizeUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalModificationApplied(FAttributeModifier Modifier);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExplosionTriggered(ABreakerPawn* Player, FVector ExplosionLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyKilled_ByAlly(const FBreakerAttackReport& AttackInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyKilled(const FBreakerAttackReport& AttackInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyDamaged_ByAlly(const FBreakerAttackReport& AttackInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyDamaged(const FBreakerAttackReport& AttackInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageGroupResolved(const FDamageGroup& DamageGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnComputeModifiedDamage(AActor* Attacker, AActor* Victim, const FBreakerDamage& InDamage, FBreakerDamage& OutDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivate(ABreakerPawn* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ModMeterHasValue() const;
    
    UFUNCTION(BlueprintCallable)
    void Internal_OnActivate(ABreakerPawn* Player);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseStackByOne();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModSpecializationInfo GetSpecializationInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSecondaryModValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetModValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetModDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEquipmentType GetEquipmentSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetCurrentValue(bool& IsValuePercent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerPawn* GetBreakerPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FModSpecializationInfo ConstructSpecializationForNewMod(AActor* TargetActor, int32 StackLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanActivate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyModToWeapon(ABreakerWeaponProp* Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyModToSyCom(ASyCom* SyCom);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyModToPawn(ABreakerPawn* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyModToCMChar(ACMCharBase* CMChar);
    

    // Fix for true pure virtual functions not being implemented
};

