#pragma once
#include "CoreMinimal.h"
#include "EDashType.generated.h"

UENUM(BlueprintType)
enum class EDashType : uint8 {
    None,
    GroundDash,
    AirDash,
    WallDash,
};

