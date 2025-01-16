#pragma once
#include "CoreMinimal.h"
#include "HitscanGunChargeTickEventDelegate.generated.h"

class UHitscanGunComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHitscanGunChargeTickEvent, UHitscanGunComponent*, Component, float, ChargePerecent);

