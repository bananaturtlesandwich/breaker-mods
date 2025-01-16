#pragma once
#include "CoreMinimal.h"
#include "EDamageSourceType.generated.h"

UENUM(BlueprintType)
enum class EDamageSourceType : uint8 {
    Melee,
    Ranged,
    Amp,
    AreaOfEffect,
    Invisible,
    Block,
};

