#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InRunVendorInventory.h"
#include "InRunVendorData.generated.h"

USTRUCT(BlueprintType)
struct FInRunVendorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FInRunVendorInventory> InRunVendorInventories;
    
    BREAKER_API FInRunVendorData();
};

