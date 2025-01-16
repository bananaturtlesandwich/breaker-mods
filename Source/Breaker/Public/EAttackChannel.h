#pragma once
#include "CoreMinimal.h"
#include "EAttackChannel.generated.h"

UENUM(BlueprintType)
enum class EAttackChannel : uint8 {
    DefaultAttack,
    AttackOne,
    AttackTwo,
    AttackThree,
    AttackFour,
    AttackFive,
    AttackSix,
    AttackSeven,
    InvalidAttack,
};

