#pragma once
#include "CoreMinimal.h"
#include "EAnimUnlinkCondition.generated.h"

UENUM(BlueprintType)
enum class EAnimUnlinkCondition : uint8 {
    DoItNow,
    TimedUnlink,
    ZeroAim,
};

