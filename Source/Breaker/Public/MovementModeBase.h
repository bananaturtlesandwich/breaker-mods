#pragma once
#include "CoreMinimal.h"
#include "MovementState.h"
#include "MovementModeBase.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMovementModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bServerOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Delegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementState StartState;
    
    BREAKER_API FMovementModeBase();
};

