#pragma once
#include "CoreMinimal.h"
#include "EBeamAttackState.generated.h"

UENUM(BlueprintType)
enum class EBeamAttackState : uint8 {
    Inactive,
    Started,
    Continue,
    Ended,
};

