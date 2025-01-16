#pragma once
#include "CoreMinimal.h"
#include "EWallNormalMovementMode.generated.h"

UENUM(BlueprintType)
enum class EWallNormalMovementMode : uint8 {
    None,
    FaceAwayFromWall,
    FaceIntoWall,
};

