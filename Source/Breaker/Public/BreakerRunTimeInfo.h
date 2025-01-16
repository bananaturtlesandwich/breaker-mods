#pragma once
#include "CoreMinimal.h"
#include "BreakerRunTimeInfo.generated.h"

USTRUCT(BlueprintType)
struct FBreakerRunTimeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunTimeWarningTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunTimeAbyssKingRisesTime;
    
    BREAKER_API FBreakerRunTimeInfo();
};

