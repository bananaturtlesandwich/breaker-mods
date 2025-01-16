#pragma once
#include "CoreMinimal.h"
#include "EDangerActionType.generated.h"

UENUM(BlueprintType)
enum class EDangerActionType : uint8 {
    None,
    KillNormalEnemy,
    KillElite,
    CollectGear,
    OpenLabDoor,
    UnlockDoor,
    OpenChest,
    CollectBossKey,
    ShrineRevive,
};

