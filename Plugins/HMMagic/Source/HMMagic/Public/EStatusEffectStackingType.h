#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectStackingType.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectStackingType : uint8 {
    Additive,
    Compound,
    Unique,
};

