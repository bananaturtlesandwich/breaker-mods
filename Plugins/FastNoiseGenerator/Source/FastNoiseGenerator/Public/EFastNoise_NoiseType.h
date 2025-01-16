#pragma once
#include "CoreMinimal.h"
#include "EFastNoise_NoiseType.generated.h"

UENUM(BlueprintType)
enum class EFastNoise_NoiseType : uint8 {
    Value,
    ValueFractal,
    Perlin,
    PerlinFractal,
    Simplex,
    SimplexFractal,
    Cellular,
    WhiteNoise,
    Cubic,
    CubicFractal,
};

