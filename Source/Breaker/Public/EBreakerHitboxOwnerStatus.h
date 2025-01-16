#pragma once
#include "CoreMinimal.h"
#include "EBreakerHitboxOwnerStatus.generated.h"

UENUM(BlueprintType)
enum class EBreakerHitboxOwnerStatus : uint8 {
    Normal,
    Superarmor,
    Invincible,
    Crit,
    ParryWindow,
    PerfectParryWindow,
};

