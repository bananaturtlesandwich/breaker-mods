#pragma once
#include "CoreMinimal.h"
#include "EChoreographerAttackType.generated.h"

UENUM(BlueprintType)
enum class EChoreographerAttackType : uint8 {
    Melee,
    Ranged,
    Invalid,
};

