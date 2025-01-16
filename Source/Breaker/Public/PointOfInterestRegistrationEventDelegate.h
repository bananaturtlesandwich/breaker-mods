#pragma once
#include "CoreMinimal.h"
#include "PointOfInterestRegistrationEventDelegate.generated.h"

class UPointOfInterestComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPointOfInterestRegistrationEvent, UPointOfInterestComponent*, Point);

