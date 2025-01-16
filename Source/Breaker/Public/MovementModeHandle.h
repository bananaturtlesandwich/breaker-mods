#pragma once
#include "CoreMinimal.h"
#include "MovementModeHandle.generated.h"

USTRUCT(BlueprintType)
struct FMovementModeHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Fingerprint;
    
    BREAKER_API FMovementModeHandle();
};

