#pragma once
#include "CoreMinimal.h"
#include "EDamageDirectionMode.generated.h"

UENUM(BlueprintType)
enum class EDamageDirectionMode : uint8 {
    UseImpulseDirection,
    RadiallyOutwardFromActor,
};

