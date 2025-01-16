#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "GenericGearInfo.h"
#include "CacheInventoryDetails.generated.h"

USTRUCT(BlueprintType)
struct BREAKER_API FCacheInventoryDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECurrencyType, int32> CachedCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGenericGearInfo> CachedGenericGear;
    
    FCacheInventoryDetails();
};

