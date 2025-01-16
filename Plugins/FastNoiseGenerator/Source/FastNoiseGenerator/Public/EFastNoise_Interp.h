#pragma once
#include "CoreMinimal.h"
#include "EFastNoise_Interp.generated.h"

UENUM(BlueprintType)
enum class EFastNoise_Interp : uint8 {
    Linear,
    Hermite,
    Quintic,
};

