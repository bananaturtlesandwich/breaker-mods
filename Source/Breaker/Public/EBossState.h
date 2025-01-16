#pragma once
#include "CoreMinimal.h"
#include "EBossState.generated.h"

UENUM(BlueprintType)
enum class EBossState : uint8 {
    NotActive,
    InProgress_Start,
    InProgress_InitialWait,
    InProgress_Cutscene_Intro,
    InProgress_Play_Phase1,
    InProgress_Cutscene_StateChange,
    InProgress_Play_Phase2,
    InProgress_Cutscene_Ending,
    Success,
    Failure,
};

