#pragma once
#include "CoreMinimal.h"
#include "EAmpActivationStyle.generated.h"

UENUM(BlueprintType)
enum class EAmpActivationStyle : uint8 {
    OnPressed,
    OnReleased,
    Custom,
};

