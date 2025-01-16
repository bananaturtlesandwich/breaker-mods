#pragma once
#include "CoreMinimal.h"
#include "EFastNoise_FractalType.generated.h"

UENUM(BlueprintType)
enum class EFastNoise_FractalType : uint8 {
    FBM,
    Billow,
    RigidMulti,
};

