#pragma once
#include "CoreMinimal.h"
#include "LandedOnGroundEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLandedOnGroundEvent, float, FallDistance);

