#pragma once
#include "CoreMinimal.h"
#include "EDamageImpulseCoordinateSpace.generated.h"

UENUM(BlueprintType)
enum class EDamageImpulseCoordinateSpace : uint8 {
    BoneLocal,
    ActorLocal,
    WorldSpace,
    Unspecified,
};

