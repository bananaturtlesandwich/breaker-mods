#pragma once
#include "CoreMinimal.h"
#include "EClientProjectileHomingStyle.generated.h"

UENUM(BlueprintType)
enum class EClientProjectileHomingStyle : uint8 {
    None,
    Rotate,
    LinearAcceleration,
};

