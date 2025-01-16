#pragma once
#include "CoreMinimal.h"
#include "GenericGearInfo.h"
#include "InRunVendorInventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FInRunVendorInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericGearInfo GearInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StockAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RunsLeftUntilRefresh;
    
    BREAKER_API FInRunVendorInventoryItem();
};

