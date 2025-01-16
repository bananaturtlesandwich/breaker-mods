#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "RawAnalogEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRawAnalogEvent, const FAnalogInputEvent&, AnalogInput);

