#pragma once
#include "CoreMinimal.h"
#include "DashNetParams.h"
#include "MovementModeBase.h"
#include "MovementModeDash.generated.h"

USTRUCT(BlueprintType)
struct FMovementModeDash : public FMovementModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDashNetParams Params;
    
    BREAKER_API FMovementModeDash();
};

