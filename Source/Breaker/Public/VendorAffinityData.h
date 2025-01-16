#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CurrencyCostMap.h"
#include "VendorGear.h"
#include "VendorAffinityData.generated.h"

USTRUCT(BlueprintType)
struct FVendorAffinityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FCurrencyCostMap> VendorUnlockProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> CurrentVendorAffinity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FVendorGear> CurrentVendorGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RunsLeftUntilRefresh;
    
    BREAKER_API FVendorAffinityData();
};

