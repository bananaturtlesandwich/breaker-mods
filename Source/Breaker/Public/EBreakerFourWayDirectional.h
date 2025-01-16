#pragma once
#include "CoreMinimal.h"
#include "EBreakerFourWayDirectional.generated.h"

UENUM(BlueprintType)
enum class EBreakerFourWayDirectional : uint8 {
    Forward,
    Right,
    Back,
    Left,
};

