#pragma once
#include "CoreMinimal.h"
#include "EBreakerPawnMovementModifier.generated.h"

UENUM(BlueprintType)
enum class EBreakerPawnMovementModifier : uint8 {
    Undefined,
    ForceCreep,
    ForceWalk,
};

