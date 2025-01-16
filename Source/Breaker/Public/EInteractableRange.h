#pragma once
#include "CoreMinimal.h"
#include "EInteractableRange.generated.h"

UENUM(BlueprintType)
enum class EInteractableRange : uint8 {
    World,
    Biome,
    Structure,
};

