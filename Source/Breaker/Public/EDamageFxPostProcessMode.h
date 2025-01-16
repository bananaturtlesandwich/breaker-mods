#pragma once
#include "CoreMinimal.h"
#include "EDamageFxPostProcessMode.generated.h"

UENUM(BlueprintType)
enum class EDamageFxPostProcessMode : uint8 {
    None,
    FlattenToActorFacing,
    ProjectSlopeOntoActor,
};

