#pragma once
#include "CoreMinimal.h"
#include "EModifierSpawnPool.generated.h"

UENUM(BlueprintType)
enum class EModifierSpawnPool : uint8 {
    DEFAULT,
    Common,
    Uncommon,
    Rare,
    HyperRare,
};

