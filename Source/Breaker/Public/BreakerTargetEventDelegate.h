#pragma once
#include "CoreMinimal.h"
#include "BreakerTargetEventDelegate.generated.h"

class ABreakerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBreakerTargetEvent, ABreakerPawn*, Target);

