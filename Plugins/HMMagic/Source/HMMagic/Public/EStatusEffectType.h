#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectType.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectType : uint8 {
    Indefinite,
    Instant,
    Passive,
};

