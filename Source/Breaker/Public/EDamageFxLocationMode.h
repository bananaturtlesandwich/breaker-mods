#pragma once
#include "CoreMinimal.h"
#include "EDamageFxLocationMode.generated.h"

UENUM(BlueprintType)
enum class EDamageFxLocationMode : uint8 {
    WeaponIntersection,
    CustomActorOffset,
    CustomActorOffsetFromWeaponLocation,
    CustomActorOffsetFromTargetLocation,
};

