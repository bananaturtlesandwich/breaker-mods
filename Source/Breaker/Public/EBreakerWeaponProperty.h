#pragma once
#include "CoreMinimal.h"
#include "EBreakerWeaponProperty.generated.h"

UENUM(BlueprintType)
enum class EBreakerWeaponProperty : uint8 {
    MinWarmUpSeconds,
    ChargeIncrementLevel,
};

