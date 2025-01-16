#pragma once
#include "CoreMinimal.h"
#include "BreakerAIButtonType.generated.h"

UENUM(BlueprintType)
enum BreakerAIButtonType {
    LIGHT_ATTACK,
    HEAVY_ATTACK,
    Jump,
    Dash,
    HEAL,
    AIM,
    FIRE_GUN,
    USE_AMP,
};

