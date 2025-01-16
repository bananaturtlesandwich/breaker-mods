#pragma once
#include "CoreMinimal.h"
#include "DangerMeterComponent_DangerTriggeredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDangerMeterComponent_DangerTriggered, FName, DangerEventRowName);

