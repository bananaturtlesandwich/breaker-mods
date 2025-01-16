#pragma once
#include "CoreMinimal.h"
#include "MovementModeBase.h"
#include "MovementModeGrindRail.generated.h"

class AGrindRail;

USTRUCT(BlueprintType)
struct FMovementModeGrindRail : public FMovementModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGrindRail* Rail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnchorAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignedSpeed;
    
    BREAKER_API FMovementModeGrindRail();
};

