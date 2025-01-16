#pragma once
#include "CoreMinimal.h"
#include "EBreakerCompareFunction.generated.h"

UENUM(BlueprintType)
enum class EBreakerCompareFunction : uint8 {
    GreaterThan,
    GreaterThanOrEqualTo,
    LessThan,
    LessThanOrEqualTo,
    EqualTo,
    NotEqualTo,
};

