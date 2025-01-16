#pragma once
#include "CoreMinimal.h"
#include "DashEventParams.h"
#include "BreakerDashEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBreakerDashEvent, FDashEventParams, DashEventParams);

