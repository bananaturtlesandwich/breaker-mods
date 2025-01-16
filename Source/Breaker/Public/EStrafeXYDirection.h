#pragma once
#include "CoreMinimal.h"
#include "EStrafeXYDirection.generated.h"

UENUM(BlueprintType)
enum class EStrafeXYDirection : uint8 {
    StrafeXYDirection_Horizontal,
    StrafeXYDirection_Vertical,
};

