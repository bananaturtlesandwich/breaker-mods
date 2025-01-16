#pragma once
#include "CoreMinimal.h"
#include "ECharacterBeamAttackSFXType.generated.h"

UENUM(BlueprintType)
enum class ECharacterBeamAttackSFXType : uint8 {
    MuzzleFlash,
    Beam,
    BeamImpact,
    Max,
};

