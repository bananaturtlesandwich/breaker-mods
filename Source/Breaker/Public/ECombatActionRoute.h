#pragma once
#include "CoreMinimal.h"
#include "ECombatActionRoute.generated.h"

UENUM(BlueprintType)
enum class ECombatActionRoute : uint8 {
    None,
    LightAttack,
    ShiftAttack,
    RailAim,
    RailAttack,
    AmpAttack,
    UseKit,
    ContextA,
    ContextB,
    Parry,
    Dash,
    Interact,
    Jump,
    RailReload,
    Ping,
};

