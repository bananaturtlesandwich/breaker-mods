#pragma once
#include "CoreMinimal.h"
#include "EBreakerDamageResponse.generated.h"

UENUM(BlueprintType)
enum class EBreakerDamageResponse : uint8 {
    Vulnerable,
    SuperArmor,
    Deflect,
    Ignore,
    Parry,
};

