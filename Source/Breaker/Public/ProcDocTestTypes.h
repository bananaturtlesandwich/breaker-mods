#pragma once
#include "CoreMinimal.h"
#include "RpaRowsMinimumDistance.h"
#include "ProcDocTestTypes.generated.h"

USTRUCT(BlueprintType)
struct FProcDocTestTypes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TargetInstanceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRpaRowsMinimumDistance> MinimumDistances;
    
    BREAKER_API FProcDocTestTypes();
};

