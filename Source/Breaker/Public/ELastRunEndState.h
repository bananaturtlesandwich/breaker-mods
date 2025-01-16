#pragma once
#include "CoreMinimal.h"
#include "ELastRunEndState.generated.h"

UENUM(BlueprintType)
enum class ELastRunEndState : uint8 {
    Invalid,
    Failure,
    Extracted,
    Completed,
};

