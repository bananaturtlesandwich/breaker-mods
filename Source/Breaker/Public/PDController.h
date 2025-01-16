#pragma once
#include "CoreMinimal.h"
#include "PDController.generated.h"

USTRUCT(BlueprintType)
struct FPDController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxError;
    
    BREAKER_API FPDController();
};

