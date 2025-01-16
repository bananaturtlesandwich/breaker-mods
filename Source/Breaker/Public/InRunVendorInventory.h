#pragma once
#include "CoreMinimal.h"
#include "InRunVendorInventoryItem.h"
#include "InRunVendorInventory.generated.h"

USTRUCT(BlueprintType)
struct FInRunVendorInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInRunVendorInventoryItem> InventoryItems;
    
    BREAKER_API FInRunVendorInventory();
};

