#pragma once
#include "CoreMinimal.h"
#include "ECharacterAgentType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAgentType : uint8 {
    Player,
    NPC,
    Monster,
    MiniBoss,
    Boss,
};

