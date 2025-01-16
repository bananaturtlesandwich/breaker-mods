#pragma once
#include "CoreMinimal.h"
#include "EStrafeResultPreference.generated.h"

UENUM(BlueprintType)
enum class EStrafeResultPreference : uint8 {
    StrafeResultPreference_FarthestDistanceFromTarget,
    StrafeResultPreference_ClosestDistanceFromTarget,
    StrafeResultPreference_Random,
};

