#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TriangleEdge.generated.h"

USTRUCT(BlueprintType)
struct FTriangleEdge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector v1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector v2;
    
    BREAKER_API FTriangleEdge();
};

