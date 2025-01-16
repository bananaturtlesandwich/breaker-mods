#pragma once
#include "CoreMinimal.h"
#include "VendorGearCost_Currency.generated.h"

USTRUCT(BlueprintType)
struct FVendorGearCost_Currency {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GearCost_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GearCost_ModifierPerGearLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GearCost_ModifierPerGearRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GearWorth_BonusPerAffixMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GearWorth_RoundToNearest;
    
    BREAKER_API FVendorGearCost_Currency();
};

