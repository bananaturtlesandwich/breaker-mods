#pragma once
#include "CoreMinimal.h"
#include "EAttackTargetSelectionMethod.generated.h"

UENUM(BlueprintType)
enum class EAttackTargetSelectionMethod : uint8 {
    StickTargetOnly,
    CameraOrStickTarget,
    Custom,
    ExecutionTarget,
};

