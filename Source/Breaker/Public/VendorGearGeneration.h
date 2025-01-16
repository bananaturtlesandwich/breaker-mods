#pragma once
#include "CoreMinimal.h"
#include "VendorGearGeneration.generated.h"

USTRUCT(BlueprintType)
struct FVendorGearGeneration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> RarityPercents;
    
    BREAKER_API FVendorGearGeneration();
};

