#pragma once
#include "CoreMinimal.h"
#include "EFastNoise_CellularDistanceFunction.generated.h"

UENUM(BlueprintType)
enum class EFastNoise_CellularDistanceFunction : uint8 {
    Euclidean,
    Manhattan,
    Natural,
};

