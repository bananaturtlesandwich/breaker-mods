#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ModArray_Tags.generated.h"

USTRUCT(BlueprintType)
struct FModArray_Tags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> Tags;
    
    BREAKER_API FModArray_Tags();
};

