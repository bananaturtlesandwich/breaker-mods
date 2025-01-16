#pragma once
#include "CoreMinimal.h"
#include "DeckingFootprint.h"
#include "WeightedDeckingClasses.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FWeightedDeckingClasses {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ClassToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverrideFootprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeckingFootprint OverrideFootprint;
    
    BREAKER_API FWeightedDeckingClasses();
};

