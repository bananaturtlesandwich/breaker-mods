#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GearTagContainer.generated.h"

USTRUCT(BlueprintType)
struct FGearTagContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    BREAKER_API FGearTagContainer();
};

