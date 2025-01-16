#pragma once
#include "CoreMinimal.h"
#include "CurrencyCostMap.h"
#include "SyComStatUpgradeLevel.generated.h"

USTRUCT(BlueprintType)
struct BREAKER_API FSyComStatUpgradeLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpgradeAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyCostMap CostPerUpgrade;
    
    FSyComStatUpgradeLevel();
};

