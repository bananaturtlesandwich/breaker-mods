#pragma once
#include "CoreMinimal.h"
#include "LinearDrag.generated.h"

USTRUCT(BlueprintType)
struct FLinearDrag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mu;
    
    BREAKER_API FLinearDrag();
};

