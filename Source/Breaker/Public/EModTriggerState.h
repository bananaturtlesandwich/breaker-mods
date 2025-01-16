#pragma once
#include "CoreMinimal.h"
#include "EModTriggerState.generated.h"

UENUM(BlueprintType)
enum class EModTriggerState : uint8 {
    Dormant,
    Active,
    ActiveInstant,
};

