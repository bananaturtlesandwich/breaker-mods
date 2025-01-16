#pragma once
#include "CoreMinimal.h"
#include "EChannelSelection.generated.h"

UENUM(BlueprintType)
enum class EChannelSelection : uint8 {
    Red,
    Green,
    Blue,
    Alpha,
};

