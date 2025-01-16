#pragma once
#include "CoreMinimal.h"
#include "ECharacterAttackSFXType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAttackSFXType : uint8 {
    Telegraph,
    MuzzleFlash,
    AttackVoice,
    Max,
};

