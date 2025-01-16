#pragma once
#include "CoreMinimal.h"
#include "ECycleStatus.generated.h"

UENUM(BlueprintType)
enum class ECycleStatus : uint8 {
    None,
    Reset,
    InProgress,
    Completed,
    Failed,
};

