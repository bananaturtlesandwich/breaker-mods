#pragma once
#include "CoreMinimal.h"
#include "EModApplicationTarget.generated.h"

UENUM(BlueprintType)
enum class EModApplicationTarget : uint8 {
    Default,
    MeleeWeapon,
    RangedWeapon,
    AmpWeapon,
};

