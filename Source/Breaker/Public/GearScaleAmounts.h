#pragma once
#include "CoreMinimal.h"
#include "GearScaleAmounts.generated.h"

USTRUCT(BlueprintType)
struct FGearScaleAmounts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseScalePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RarityBonusPercent;
    
    BREAKER_API FGearScaleAmounts();
};

