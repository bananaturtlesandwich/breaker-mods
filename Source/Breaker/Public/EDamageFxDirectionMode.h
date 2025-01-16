#pragma once
#include "CoreMinimal.h"
#include "EDamageFxDirectionMode.generated.h"

UENUM(BlueprintType)
enum class EDamageFxDirectionMode : uint8 {
    Custom,
    Left,
    Right,
    Up,
    Down,
    Forward,
    Backward,
    LaunchLight,
    LaunchMedium,
};

