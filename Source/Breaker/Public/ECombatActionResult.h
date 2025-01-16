#pragma once
#include "CoreMinimal.h"
#include "ECombatActionResult.generated.h"

UENUM(BlueprintType)
enum class ECombatActionResult : uint8 {
    None,
    LightAttack,
    ShiftAttack,
    SpecialAttack,
    RailAim,
    RailAttack,
    AmpAttack,
    PrimaryAction,
    Parry,
    Dash,
    Interact,
    Jump,
};

