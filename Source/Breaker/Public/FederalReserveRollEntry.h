#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FederalReserveModifierList.h"
#include "FederalReserveRollBucket.h"
#include "FederalReserveRollEntry.generated.h"

USTRUCT(BlueprintType)
struct FFederalReserveRollEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFederalReserveRollBucket> Buckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FFederalReserveModifierList> Modifications;
    
    BREAKER_API FFederalReserveRollEntry();
};

