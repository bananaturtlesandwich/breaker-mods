#pragma once
#include "CoreMinimal.h"
#include "EBreakerHitboxStatus.generated.h"

UENUM(BlueprintType)
enum class EBreakerHitboxStatus : uint8 {
    Normal,
    Deflect,
    Headshot,
};

