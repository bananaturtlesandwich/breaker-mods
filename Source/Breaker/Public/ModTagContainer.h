#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ModTagContainer.generated.h"

USTRUCT(BlueprintType)
struct FModTagContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    BREAKER_API FModTagContainer();
};

