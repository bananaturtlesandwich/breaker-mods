#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RPAParameters.h"
#include "LocatorRow.generated.h"

USTRUCT(BlueprintType)
struct FLocatorRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Biome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRPAParameters RpaParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRemainingToDeck;
    
    BREAKER_API FLocatorRow();
};

