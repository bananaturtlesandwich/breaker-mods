#pragma once
#include "CoreMinimal.h"
#include "OnEquipmentSpecialChargeIncrementedDelegate.generated.h"

class ABreakerWeaponProp;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquipmentSpecialChargeIncremented, ABreakerWeaponProp*, WeaponProp, int32, IncrementLevel);

