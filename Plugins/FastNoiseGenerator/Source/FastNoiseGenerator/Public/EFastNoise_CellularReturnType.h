#pragma once
#include "CoreMinimal.h"
#include "EFastNoise_CellularReturnType.generated.h"

UENUM(BlueprintType)
enum class EFastNoise_CellularReturnType : uint8 {
    CellValue,
    Distance,
    Distance2,
    Distance2Add,
    Distance2Sub,
    Distance2Mul,
    Distance2Div,
};

