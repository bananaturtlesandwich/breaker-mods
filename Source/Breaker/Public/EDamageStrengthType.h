#pragma once
#include "CoreMinimal.h"
#include "EDamageStrengthType.generated.h"

UENUM(BlueprintType)
enum class EDamageStrengthType : uint8 {
    None,
    Flinch,
    Light,
    Medium,
    Strong,
    SuperHeavy,
};

