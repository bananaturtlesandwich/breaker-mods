#pragma once
#include "CoreMinimal.h"
#include "HitscanGunChargeStartEventDelegate.generated.h"

class UHitscanGunComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHitscanGunChargeStartEvent, UHitscanGunComponent*, Component);

