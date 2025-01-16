#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RpaRowsMinimumDistance.generated.h"

USTRUCT(BlueprintType)
struct FRpaRowsMinimumDistance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DistanceMinMax;
    
    BREAKER_API FRpaRowsMinimumDistance();
};

