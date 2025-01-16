#pragma once
#include "CoreMinimal.h"
#include "EBreakerReward.generated.h"

UENUM(BlueprintType)
enum class EBreakerReward : uint8 {
    UNDEFINED,
    Gearbit,
    Holobyte,
    Core,
    Materials,
    Codec,
    GoldenRations,
    AbyssStone,
    Key,
    RemoteKey,
    BrightBlood,
};

