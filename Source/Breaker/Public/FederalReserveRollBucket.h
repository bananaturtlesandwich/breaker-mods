#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FederalReserveRollBucket.generated.h"

USTRUCT(BlueprintType)
struct FFederalReserveRollBucket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    BREAKER_API FFederalReserveRollBucket();
};

