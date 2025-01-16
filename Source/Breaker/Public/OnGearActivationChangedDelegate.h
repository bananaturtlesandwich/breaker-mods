#pragma once
#include "CoreMinimal.h"
#include "OnGearActivationChangedDelegate.generated.h"

class UBreakerEquipmentComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGearActivationChanged, UBreakerEquipmentComponent*, EquipmentComponent);

