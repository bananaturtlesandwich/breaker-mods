#pragma once
#include "CoreMinimal.h"
#include "EUIInputDeviceType.generated.h"

UENUM(BlueprintType)
enum class EUIInputDeviceType : uint8 {
    None,
    Gamepad,
    Keyboard,
    Mouse,
};

