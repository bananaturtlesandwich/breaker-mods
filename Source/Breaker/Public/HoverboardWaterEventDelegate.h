#pragma once
#include "CoreMinimal.h"
#include "HoverboardWaterEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHoverboardWaterEvent, bool, bIsOverWater);

