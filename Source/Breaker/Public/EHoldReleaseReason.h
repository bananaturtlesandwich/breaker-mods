#pragma once
#include "CoreMinimal.h"
#include "EHoldReleaseReason.generated.h"

UENUM(BlueprintType)
enum class EHoldReleaseReason : uint8 {
    NormalPlayerRelease,
    Interrupted,
};

