#pragma once
#include "CoreMinimal.h"
#include "EHUDState.h"
#include "HudStateChangeStartingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHudStateChangeStarting, EHUDState, NewHudState);

