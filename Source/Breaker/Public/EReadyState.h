#pragma once
#include "CoreMinimal.h"
#include "EReadyState.generated.h"

UENUM(BlueprintType)
enum class EReadyState : uint8 {
    Uninitialized,
    Standby,
    Counting,
};

