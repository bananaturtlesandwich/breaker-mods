#pragma once
#include "CoreMinimal.h"
#include "BossFightManager_OnCutsceneEventDelegate.generated.h"

class ULevelSequence;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBossFightManager_OnCutsceneEvent, ULevelSequence*, Cutscene);

