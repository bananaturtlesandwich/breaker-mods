#pragma once
#include "CoreMinimal.h"
#include "EHoverboardStatus.generated.h"

UENUM(BlueprintType)
enum class EHoverboardStatus : uint8 {
    Normal,
    Sliding,
    Crouching,
};

