#pragma once
#include "CoreMinimal.h"
#include "StaggerLocalPrediction.generated.h"

USTRUCT(BlueprintType)
struct FStaggerLocalPrediction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bServerIsStaggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerStaggerValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerStaggerDelay;
    
    BREAKER_API FStaggerLocalPrediction();
};

