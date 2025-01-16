#pragma once
#include "CoreMinimal.h"
#include "EMeleeAttackState.generated.h"

UENUM(BlueprintType)
enum class EMeleeAttackState : uint8 {
    None,
    NormalGroundAttack,
    ComboFollowupAttack,
    SwapLinkAttack,
    DashAttack,
    InAirAttack,
    SpecialAttack,
};

