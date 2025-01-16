#pragma once
#include "CoreMinimal.h"
#include "EEquipmentCategory.generated.h"

UENUM(BlueprintType)
enum class EEquipmentCategory : uint8 {
    None,
    Balanced,
    Compact,
    Dash,
    Drone,
    Dual,
    Force,
    Grenade,
    Kit,
    Heavy,
    Launcher,
    Line,
    Mine,
    Punch,
    Scatter,
    Skill,
    Trigger,
    Hoverboard,
    CustomAction,
    Shield,
};

