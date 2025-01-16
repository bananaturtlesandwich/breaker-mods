#pragma once
#include "CoreMinimal.h"
#include "EAttributeType.generated.h"

UENUM(BlueprintType)
enum class EAttributeType : uint8 {
    Limited,
    Ranged,
};

