#pragma once
#include "CoreMinimal.h"
#include "EPushBackSourceType.generated.h"

UENUM(BlueprintType)
enum class EPushBackSourceType : uint8 {
    Invisible,
    MeleeStrike,
    AnimMovement,
    MomentumSlide,
};

