#pragma once
#include "CoreMinimal.h"
#include "BreakerTargetInRangeEventDelegate.generated.h"

class ABreakerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBreakerTargetInRangeEvent, ABreakerPawn*, Target);

