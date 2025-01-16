#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSpawnability.generated.h"

UENUM(BlueprintType)
enum class EEquipmentSpawnability : uint8 {
    None,
    Editor,
    Dev,
    Testing,
    Production,
};

