#pragma once
#include "CoreMinimal.h"
#include "HitscanGunEmptyReloadEventDelegate.generated.h"

class UHitscanGunComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHitscanGunEmptyReloadEvent, UHitscanGunComponent*, Component);

