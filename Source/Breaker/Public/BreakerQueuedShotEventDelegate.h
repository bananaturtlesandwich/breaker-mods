#pragma once
#include "CoreMinimal.h"
#include "BreakerQueuedShotEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBreakerQueuedShotEvent, bool, bBurstShot);

