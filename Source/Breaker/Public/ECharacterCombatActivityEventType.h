#pragma once
#include "CoreMinimal.h"
#include "ECharacterCombatActivityEventType.generated.h"

UENUM(BlueprintType)
enum class ECharacterCombatActivityEventType : uint8 {
    None,
    GroundComboBegin,
    GroundComboFollowUp,
    GroundLinkedCombo,
    GroundChargedNormal,
    GroundComboFinish,
    GroundSpecialBegin,
    GroundSpecialChargeIncrement,
    GroundSpecialRelease,
    GroundSpecialFinish,
    InAirComboBegin,
    InAirComboEnd,
    InAirSpecialBegin,
    InAirSpecialEnd,
    DashAttackBegin,
    DashAttackEnd,
    AmpActivated,
    AmpTriggered,
    AmpDeactivated,
};

