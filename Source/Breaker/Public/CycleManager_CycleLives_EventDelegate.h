#pragma once
#include "CoreMinimal.h"
#include "CycleManager_CycleLives_EventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCycleManager_CycleLives_Event, int32, RemainingLives);

