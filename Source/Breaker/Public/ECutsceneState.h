#pragma once
#include "CoreMinimal.h"
#include "ECutsceneState.generated.h"

UENUM(BlueprintType)
enum class ECutsceneState : uint8 {
    CutsceneState_Inactive,
    CutsceneState_Playing_Static,
    CutsceneState_Playing_ZoomBack,
};

