#pragma once
#include "CoreMinimal.h"
#include "HitscanGunTriggerFailedEventDelegate.generated.h"

class UHitscanGunComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHitscanGunTriggerFailedEvent, UHitscanGunComponent*, Component);

