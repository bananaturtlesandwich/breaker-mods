#pragma once
#include "CoreMinimal.h"
#include "KitPointsGainedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKitPointsGainedEvent, int32, Amount);

