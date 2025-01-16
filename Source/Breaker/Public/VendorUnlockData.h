#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CurrencyCostMap.h"
#include "VendorUnlockData.generated.h"

USTRUCT(BlueprintType)
struct FVendorUnlockData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyCostMap VendorUnlockCost;
    
    BREAKER_API FVendorUnlockData();
};

