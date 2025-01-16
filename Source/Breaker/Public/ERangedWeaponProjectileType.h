#pragma once
#include "CoreMinimal.h"
#include "ERangedWeaponProjectileType.generated.h"

UENUM(BlueprintType)
enum class ERangedWeaponProjectileType : uint8 {
    Hitscan,
    Homing,
    Physics,
    Custom = 254,
};

