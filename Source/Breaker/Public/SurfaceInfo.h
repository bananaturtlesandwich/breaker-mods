#pragma once
#include "CoreMinimal.h"
#include "ESurface.h"
#include "SurfaceInfo.generated.h"

USTRUCT(BlueprintType)
struct FSurfaceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESurface::Type> SurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InGrassBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterDepth;
    
    BREAKER_API FSurfaceInfo();
};

