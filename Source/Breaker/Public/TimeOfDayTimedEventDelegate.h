#pragma once
#include "CoreMinimal.h"
#include "TimeOfDayTimedEventDelegate.generated.h"

class UDaytimeCycleComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimeOfDayTimedEvent, UDaytimeCycleComponent*, Component);

