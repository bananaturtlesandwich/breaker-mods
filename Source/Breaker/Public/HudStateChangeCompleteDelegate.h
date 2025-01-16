#pragma once
#include "CoreMinimal.h"
#include "EHUDState.h"
#include "HudStateChangeCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHudStateChangeComplete, EHUDState, NewHudState);

