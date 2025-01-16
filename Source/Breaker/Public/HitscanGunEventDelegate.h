#pragma once
#include "CoreMinimal.h"
#include "HitscanGunEventDelegate.generated.h"

class UHitscanGunComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHitscanGunEvent, UHitscanGunComponent*, Gun);

