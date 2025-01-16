#pragma once
#include "CoreMinimal.h"
#include "EAttackTargetStatus.generated.h"

UENUM(BlueprintType)
enum class EAttackTargetStatus : uint8 {
    Idle,
    Deslected,
    Selected,
    Locked,
};

