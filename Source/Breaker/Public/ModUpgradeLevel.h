#pragma once
#include "CoreMinimal.h"
#include "CurrencyCostMap.h"
#include "ModAttributeModifier.h"
#include "ModUpgradeLevel.generated.h"

USTRUCT(BlueprintType)
struct FModUpgradeLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModAttributeModifier> TargetAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyCostMap CostToReach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfEquipSlotsUsed;
    
    BREAKER_API FModUpgradeLevel();
};

