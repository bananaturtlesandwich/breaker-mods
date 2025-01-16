#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BreakerCameraShakeParams.generated.h"

USTRUCT(BlueprintType)
struct FBreakerCameraShakeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> VecParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FloatParams;
    
    BREAKER_API FBreakerCameraShakeParams();
};

