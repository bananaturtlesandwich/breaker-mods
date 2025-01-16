#pragma once
#include "CoreMinimal.h"
#include "MaxGearDurabilityInfo.generated.h"

USTRUCT(BlueprintType)
struct FMaxGearDurabilityInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetMaxDurabilityPerRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> MaxDurabilityPerRarity;
    
    BREAKER_API FMaxGearDurabilityInfo();
};

