#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "VendorGearCost_Currency.h"
#include "VendorGearCost.generated.h"

USTRUCT(BlueprintType)
struct FVendorGearCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECurrencyType, FVendorGearCost_Currency> GearCostPerCurrency;
    
    BREAKER_API FVendorGearCost();
};

