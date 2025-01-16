#pragma once
#include "CoreMinimal.h"
#include "HitscanGunReloadEventDelegate.generated.h"

class UHitscanGunComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHitscanGunReloadEvent, UHitscanGunComponent*, Component, bool, Successful);

