#pragma once
#include "CoreMinimal.h"
#include "HitscanGunChargeReleaseEventDelegate.generated.h"

class UHitscanGunComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHitscanGunChargeReleaseEvent, UHitscanGunComponent*, Component, float, FinalChargePercent);

