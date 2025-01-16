#pragma once
#include "CoreMinimal.h"
#include "CycleManager_CycleHealthKitsBought_EventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCycleManager_CycleHealthKitsBought_Event, int32, HealthKitsBought);

