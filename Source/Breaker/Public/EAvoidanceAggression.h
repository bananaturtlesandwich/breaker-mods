#pragma once
#include "CoreMinimal.h"
#include "EAvoidanceAggression.generated.h"

UENUM(BlueprintType)
enum class EAvoidanceAggression : uint8 {
    AvoidanceAggression11,
    AvoidanceAggression22,
    AvoidanceAggression45,
    AvoidanceAggression66,
    AvoidanceMaxTest,
};

