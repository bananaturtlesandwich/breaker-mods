#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectStackLimitType.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectStackLimitType : uint8 {
    Limited,
    Unlimited,
};

