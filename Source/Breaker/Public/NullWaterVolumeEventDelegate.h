#pragma once
#include "CoreMinimal.h"
#include "NullWaterVolumeEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNullWaterVolumeEvent, bool, bInside);

