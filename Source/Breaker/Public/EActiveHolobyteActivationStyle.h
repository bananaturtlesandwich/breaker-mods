#pragma once
#include "CoreMinimal.h"
#include "EActiveHolobyteActivationStyle.generated.h"

UENUM(BlueprintType)
enum class EActiveHolobyteActivationStyle : uint8 {
    OnPressed,
    OnReleased,
};

