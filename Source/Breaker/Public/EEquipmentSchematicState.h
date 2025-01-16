#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSchematicState.generated.h"

UENUM(BlueprintType)
enum class EEquipmentSchematicState : uint8 {
    NotDiscovered,
    Discovered,
    SchematicFound,
};

