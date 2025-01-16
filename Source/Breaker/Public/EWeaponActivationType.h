#pragma once
#include "CoreMinimal.h"
#include "EWeaponActivationType.generated.h"

UENUM(BlueprintType)
enum class EWeaponActivationType : uint8 {
    Normal,
    Charged,
    Heavy,
    Special,
};

