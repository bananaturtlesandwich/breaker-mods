#pragma once
#include "CoreMinimal.h"
#include "InteractableParams.generated.h"

class UInteractableSet;

USTRUCT(BlueprintType)
struct FInteractableParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractableSet* InteractableSet;
    
    BREAKER_API FInteractableParams();
};

