#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "CurrencyCostMap.h"
#include "VendorRewardData.h"
#include "VendorAffinityLevelData.generated.h"

USTRUCT(BlueprintType)
struct FVendorAffinityLevelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyCostMap LevelCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FVendorRewardData> VendorRewards;
    
    BREAKER_API FVendorAffinityLevelData();
};

