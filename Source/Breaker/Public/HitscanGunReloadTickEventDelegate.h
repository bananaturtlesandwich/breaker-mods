#pragma once
#include "CoreMinimal.h"
#include "HitscanGunReloadTickEventDelegate.generated.h"

class UHitscanGunComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHitscanGunReloadTickEvent, UHitscanGunComponent*, Component, float, RemainingTimeSeconds, float, NormalizedRemainingTime);

