#pragma once
#include "CoreMinimal.h"
#include "ECombatActionResult.h"
#include "OnEquipmentChargeReleasedDelegate.generated.h"

class ABreakerWeaponProp;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnEquipmentChargeReleased, ABreakerWeaponProp*, WeaponProp, ECombatActionResult, Action, float, FillRatio);

