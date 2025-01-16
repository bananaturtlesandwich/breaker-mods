#pragma once
#include "CoreMinimal.h"
#include "ERangedWeaponProjectileSpreadPattern.generated.h"

UENUM(BlueprintType)
enum class ERangedWeaponProjectileSpreadPattern : uint8 {
    Random,
    Uniform,
};

