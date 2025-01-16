#pragma once
#include "CoreMinimal.h"
#include "EBreakerProjectileShape.generated.h"

UENUM(BlueprintType)
enum class EBreakerProjectileShape : uint8 {
    Sphere,
    Capsule,
    Box,
};

