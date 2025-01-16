#pragma once
#include "CoreMinimal.h"
#include "DangerMeterComponent_DangerTriggeredVerySoonDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDangerMeterComponent_DangerTriggeredVerySoon, int32, Notification);

