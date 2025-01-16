#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "CurrencyCostArrays.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyCostArrays {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECurrencyType> Currencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Costs;
    
    BREAKER_API FCurrencyCostArrays();
};

