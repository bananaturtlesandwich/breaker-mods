#pragma once
#include "CoreMinimal.h"
#include "BeaconInProgressChangedEventDelegate.generated.h"

class ABeacon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBeaconInProgressChangedEvent, ABeacon*, Beacon);

