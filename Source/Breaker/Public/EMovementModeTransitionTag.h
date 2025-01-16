#pragma once
#include "CoreMinimal.h"
#include "EMovementModeTransitionTag.generated.h"

UENUM(BlueprintType)
enum class EMovementModeTransitionTag : uint8 {
    None,
    ServerInterrupt,
    RemotePredictable,
};

