#pragma once
#include "CoreMinimal.h"
#include "ETutorialTrigger.generated.h"

UENUM(BlueprintType)
enum class ETutorialTrigger : uint8 {
    DEFAULT,
    EnterHUB,
    PB,
    Multiplayer,
    Vendor_Blade,
    EnterRun,
    Fall,
    Extract,
    Death,
    DeathRecap,
};

