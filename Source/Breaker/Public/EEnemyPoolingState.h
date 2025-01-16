#pragma once
#include "CoreMinimal.h"
#include "EEnemyPoolingState.generated.h"

UENUM(BlueprintType)
enum class EEnemyPoolingState : uint8 {
    NotPooled,
    Pooled,
    Spawned,
};

