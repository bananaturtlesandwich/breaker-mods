#pragma once
#include "CoreMinimal.h"
#include "HitscanGunAutofireEnabledEventDelegate.generated.h"

class UHitscanGunComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHitscanGunAutofireEnabledEvent, UHitscanGunComponent*, Component, bool, bIsEnabled);

