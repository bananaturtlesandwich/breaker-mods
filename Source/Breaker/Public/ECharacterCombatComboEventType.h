#pragma once
#include "CoreMinimal.h"
#include "ECharacterCombatComboEventType.generated.h"

UENUM(BlueprintType)
enum class ECharacterCombatComboEventType : uint8 {
    Interrupted,
    HitLanded,
    DashInterrupt,
    ComboWindowBegan,
    ComboWindowEnded,
};

