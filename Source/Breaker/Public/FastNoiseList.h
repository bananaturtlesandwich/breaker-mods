#pragma once
#include "CoreMinimal.h"
#include "FastNoiseList.generated.h"

class UFastNoiseWrapper;

USTRUCT(BlueprintType)
struct FFastNoiseList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFastNoiseWrapper*> Members;
    
    BREAKER_API FFastNoiseList();
};

