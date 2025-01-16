#pragma once
#include "CoreMinimal.h"
#include "HookshotMovementParams.generated.h"

USTRUCT(BlueprintType)
struct FHookshotMovementParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PullSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHookDistance;
    
    BREAKER_API FHookshotMovementParams();
};

