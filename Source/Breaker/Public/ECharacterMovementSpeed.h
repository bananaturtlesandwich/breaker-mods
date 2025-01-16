#pragma once
#include "CoreMinimal.h"
#include "ECharacterMovementSpeed.generated.h"

UENUM(BlueprintType)
enum class ECharacterMovementSpeed : uint8 {
    Jog,
    Sprint,
    Creep,
    Walk,
};

