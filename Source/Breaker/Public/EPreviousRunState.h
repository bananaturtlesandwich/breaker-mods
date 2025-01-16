#pragma once
#include "CoreMinimal.h"
#include "EPreviousRunState.generated.h"

UENUM(BlueprintType)
enum class EPreviousRunState : uint8 {
    None,
    SuccessfulRun,
    FailedRun,
    QuitMidRun,
    HostDisconnected,
    HasExtractedGear,
    INVALID,
};

