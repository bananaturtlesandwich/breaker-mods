#pragma once
#include "CoreMinimal.h"
#include "HitscanGunTriggerReleasedEventDelegate.generated.h"

class UHitscanGunComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHitscanGunTriggerReleasedEvent, UHitscanGunComponent*, Component);

