#pragma once
#include "CoreMinimal.h"
#include "RowAvoidances.h"
#include "AvoidanceArrays.generated.h"

USTRUCT(BlueprintType)
struct FAvoidanceArrays {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRowAvoidances> RowAvoidance;
    
    BREAKER_API FAvoidanceArrays();
};

