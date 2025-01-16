#pragma once
#include "CoreMinimal.h"
#include "EBreakerRangedFireType.generated.h"

UENUM(BlueprintType)
enum class EBreakerRangedFireType : uint8 {
    SemiAuto,
    FullAuto,
    ChargeUpDamage,
};

