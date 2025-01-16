#pragma once
#include "CoreMinimal.h"
#include "EEnemyFoleyImpactIntensity.generated.h"

UENUM(BlueprintType)
enum class EEnemyFoleyImpactIntensity : uint8 {
    None,
    Light,
    Medium,
    Heavy,
    Max,
};

