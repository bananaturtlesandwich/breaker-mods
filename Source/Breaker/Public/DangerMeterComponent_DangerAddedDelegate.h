#pragma once
#include "CoreMinimal.h"
#include "DangerMeterComponent_DangerAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDangerMeterComponent_DangerAdded, int32, DangerAdded, int32, DangerMeter);

