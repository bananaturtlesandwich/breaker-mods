#pragma once
#include "CoreMinimal.h"
#include "ETimeProgressionFormatting.generated.h"

UENUM(BlueprintType)
enum class ETimeProgressionFormatting : uint8 {
    Ex_12,
    Ex_24,
    Short_12,
    Short_24,
};

