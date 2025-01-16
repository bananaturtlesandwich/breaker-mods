#pragma once
#include "CoreMinimal.h"
#include "HitscanGunTriggerPressedEventDelegate.generated.h"

class UHitscanGunComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHitscanGunTriggerPressedEvent, UHitscanGunComponent*, Component);

