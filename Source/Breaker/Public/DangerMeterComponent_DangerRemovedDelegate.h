#pragma once
#include "CoreMinimal.h"
#include "DangerMeterComponent_DangerRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDangerMeterComponent_DangerRemoved, int32, DangerRemoved, int32, DangerMeter);

