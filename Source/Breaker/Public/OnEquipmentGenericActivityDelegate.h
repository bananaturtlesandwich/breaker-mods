#pragma once
#include "CoreMinimal.h"
#include "OnEquipmentGenericActivityDelegate.generated.h"

class ABreakerWeaponProp;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquipmentGenericActivity, ABreakerWeaponProp*, WeaponProp);

