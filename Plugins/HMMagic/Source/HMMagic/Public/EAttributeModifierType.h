#pragma once
#include "CoreMinimal.h"
#include "EAttributeModifierType.generated.h"

UENUM(BlueprintType)
enum class EAttributeModifierType : uint8 {
    Maximum,
    Minimum,
    Percentage = 160,
    Value = 254,
};

