#pragma once
#include "CoreMinimal.h"
#include "TriggerEventDelegate.generated.h"

class ABreakerPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTriggerEvent, ABreakerPlayerController*, BreakerPlayerController);

