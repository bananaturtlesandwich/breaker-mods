#pragma once
#include "CoreMinimal.h"
#include "CurrencyCostMap.h"
#include "DifficultyUnlockCost.generated.h"

USTRUCT(BlueprintType)
struct FDifficultyUnlockCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyCostMap Cost;
    
    BREAKER_API FDifficultyUnlockCost();
};

