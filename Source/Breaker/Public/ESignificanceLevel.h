#pragma once
#include "CoreMinimal.h"
#include "ESignificanceLevel.generated.h"

UENUM(BlueprintType)
enum class ESignificanceLevel : uint8 {
    None,
    Low,
    Medium,
    High,
};

