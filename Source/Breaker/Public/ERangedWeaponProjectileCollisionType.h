#pragma once
#include "CoreMinimal.h"
#include "ERangedWeaponProjectileCollisionType.generated.h"

UENUM(BlueprintType)
enum class ERangedWeaponProjectileCollisionType : uint8 {
    None,
    Cube,
    Cylinder,
    Spherical,
    Custom = 254,
};

