#pragma once
#include "CoreMinimal.h"
#include "EBeaconActivityState.generated.h"

UENUM(BlueprintType)
enum class EBeaconActivityState : uint8 {
    EBeaconState_Inactive,
    EBeaconState_EventInProgress,
    EBeaconState_EventCompleted,
    EBeaconState_EventFailed,
    EBeaconState_Activated,
};

