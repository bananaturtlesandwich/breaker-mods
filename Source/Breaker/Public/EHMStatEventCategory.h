#pragma once
#include "CoreMinimal.h"
#include "EHMStatEventCategory.generated.h"

UENUM(BlueprintType)
enum class EHMStatEventCategory : uint8 {
    Uncategorized,
    Audio = 2,
    CPU = 4,
    Game = 8,
    GPU = 16,
    Networking = 32,
    Memory = 64,
};

