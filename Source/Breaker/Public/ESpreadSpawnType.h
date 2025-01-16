#pragma once
#include "CoreMinimal.h"
#include "ESpreadSpawnType.generated.h"

UENUM(BlueprintType)
enum class ESpreadSpawnType : uint8 {
    SST_Grid,
    SST_Radial,
};

