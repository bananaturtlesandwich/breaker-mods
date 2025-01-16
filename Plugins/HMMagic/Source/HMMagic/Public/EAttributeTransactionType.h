#pragma once
#include "CoreMinimal.h"
#include "EAttributeTransactionType.generated.h"

UENUM(BlueprintType)
enum class EAttributeTransactionType : uint8 {
    Modify,
    Refill,
    Reset = 254,
};

