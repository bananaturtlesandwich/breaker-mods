#pragma once
#include "CoreMinimal.h"
#include "EInputActivationType.generated.h"

UENUM(BlueprintType)
enum class EInputActivationType : uint8 {
    OnPressed,
    OnReleased,
};

