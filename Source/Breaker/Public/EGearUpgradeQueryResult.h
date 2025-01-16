#pragma once
#include "CoreMinimal.h"
#include "EGearUpgradeQueryResult.generated.h"

UENUM(BlueprintType)
enum class EGearUpgradeQueryResult : uint8 {
    Invalid,
    MissingGUM,
    MaxedOutGUM,
    CantAffordUpgrade,
    UpgradeLevelLocked,
    CanUpgrade,
};

