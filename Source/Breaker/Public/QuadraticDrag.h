#pragma once
#include "CoreMinimal.h"
#include "QuadraticDrag.generated.h"

USTRUCT(BlueprintType)
struct FQuadraticDrag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Linear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Quad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuadBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TerminalSpeedBias;
    
    BREAKER_API FQuadraticDrag();
};

