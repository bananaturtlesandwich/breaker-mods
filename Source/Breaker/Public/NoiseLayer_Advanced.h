#pragma once
#include "CoreMinimal.h"
#include "EFastNoise_CellularDistanceFunction.h"
#include "EFastNoise_CellularReturnType.h"
#include "EFastNoise_FractalType.h"
#include "EFastNoise_Interp.h"
#include "NoiseLayer_Advanced.generated.h"

USTRUCT(BlueprintType)
struct FNoiseLayer_Advanced {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFastNoise_Interp InterpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFastNoise_FractalType FractalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Octaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Lacunarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellularJitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFastNoise_CellularDistanceFunction CellularDistanceFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFastNoise_CellularReturnType CellularReturnType;
    
    BREAKER_API FNoiseLayer_Advanced();
};

