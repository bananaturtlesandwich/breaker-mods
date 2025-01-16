#pragma once
#include "CoreMinimal.h"
#include "EScanShape.generated.h"

UENUM(BlueprintType)
enum class EScanShape : uint8 {
    Sphere,
    Capsule,
    Box,
};

