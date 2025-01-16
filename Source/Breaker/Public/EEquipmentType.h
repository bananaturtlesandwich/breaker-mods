#pragma once
#include "CoreMinimal.h"
#include "EEquipmentType.generated.h"

UENUM(BlueprintType)
enum class EEquipmentType : uint8 {
    Amp,
    Dash,
    Blade,
    Rail,
    Utility,
    Companion,
    Movement,
    CustomAction,
    Passive,
    Armor,
    Accessory = 16,
    MAX,
};

