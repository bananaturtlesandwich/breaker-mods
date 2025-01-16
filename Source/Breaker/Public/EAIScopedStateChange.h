#pragma once
#include "CoreMinimal.h"
#include "EAIScopedStateChange.generated.h"

UENUM(BlueprintType)
enum class EAIScopedStateChange : uint8 {
    NoStateChanges,
    LeashingState,
    AIAdvantageState,
};

