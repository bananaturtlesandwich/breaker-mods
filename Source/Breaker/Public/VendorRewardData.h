#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VendorRewardData.generated.h"

USTRUCT(BlueprintType)
struct FVendorRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LevelReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldReApplyReward;
    
    BREAKER_API FVendorRewardData();
};

