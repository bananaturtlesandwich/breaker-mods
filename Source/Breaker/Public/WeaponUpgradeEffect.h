#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BreakerCombatEffect.h"
#include "EquipmentPerkDetails.h"
#include "WeaponUpgradeEffect.generated.h"

UCLASS(Abstract, Blueprintable)
class UWeaponUpgradeEffect : public UBreakerCombatEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPerkEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag AssociatedGearTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEquipmentPerkDetails PerkDetails;
    
    UWeaponUpgradeEffect();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldApply() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpgradeLevelChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAssociatedValue() const;
    
};

