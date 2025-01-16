#pragma once
#include "CoreMinimal.h"
#include "EChoreographerExclusion.generated.h"

UENUM(BlueprintType)
enum class EChoreographerExclusion : uint8 {
    ZeroBitMarker,
    NoExclusions,
    ExcludePositioning,
    ExcludePositionBlocking = 4,
    ExcludeAttackPriority = 8,
    ExcludeAllParticipation = 16,
};

