#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "CurrencyCostMap.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyCostMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECurrencyType, int32> Costs;
    
    BREAKER_API FCurrencyCostMap();
};

