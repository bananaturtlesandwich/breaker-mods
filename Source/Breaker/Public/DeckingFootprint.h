#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFootprintShapes.h"
#include "DeckingFootprint.generated.h"

USTRUCT(BlueprintType)
struct FDeckingFootprint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFootprintShapes FootprintShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CircleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FootprintOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CubeXYZ;
    
    BREAKER_API FDeckingFootprint();
};

