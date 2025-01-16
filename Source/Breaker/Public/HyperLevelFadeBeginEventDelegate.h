#pragma once
#include "CoreMinimal.h"
#include "ELevelState.h"
#include "HyperLevelFadeBeginEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHyperLevelFadeBeginEvent, ELevelState, NewLevel, ELevelState, OldLevel, float, FadeLength);

