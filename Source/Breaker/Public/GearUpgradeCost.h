#pragma once
#include "CoreMinimal.h"
#include "GearUpgradeCost.generated.h"

USTRUCT(BlueprintType)
struct FGearUpgradeCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbyssStoneCost;
    
    BREAKER_API FGearUpgradeCost();
};

