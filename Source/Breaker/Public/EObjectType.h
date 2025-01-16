#pragma once
#include "CoreMinimal.h"
#include "EObjectType.generated.h"

UENUM(BlueprintType)
enum class EObjectType : uint8 {
    Gameplay,
    Spawner,
    Treasure,
    Static,
    None,
};

