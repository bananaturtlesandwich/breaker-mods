#pragma once
#include "CoreMinimal.h"
#include "CurrencyCostMap.h"
#include "EquipmentPerkDetails.generated.h"

class UWeaponUpgradeEffect;

USTRUCT(BlueprintType)
struct FEquipmentPerkDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModifiedPropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModifiedPropertyUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PerLevelModEffectValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurrencyCostMap> PerLevelCurrencyCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWeaponUpgradeEffect> PerkClass;
    
    BREAKER_API FEquipmentPerkDetails();
};

