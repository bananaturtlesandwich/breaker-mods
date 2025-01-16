#pragma once
#include "CoreMinimal.h"
#include "EDashModifier.generated.h"

UENUM(BlueprintType)
enum class EDashModifier : uint8 {
    PerfectDodge,
    WeakDashCancel,
    LinkedDashCancel,
    ForcedCooldown,
    ShouldNotDash,
};

