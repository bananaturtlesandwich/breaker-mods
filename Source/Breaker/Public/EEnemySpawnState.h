#pragma once
#include "CoreMinimal.h"
#include "EEnemySpawnState.generated.h"

UENUM(BlueprintType)
enum class EEnemySpawnState : uint8 {
    Hidden,
    Dead,
    Enabled,
};

