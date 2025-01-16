#pragma once
#include "CoreMinimal.h"
#include "EBreakerEightWayDirectional.generated.h"

UENUM(BlueprintType)
enum class EBreakerEightWayDirectional : uint8 {
    Forward,
    ForwardRight,
    Right,
    BackRight,
    Back,
    BackLeft,
    Left,
    ForwardLeft,
};

