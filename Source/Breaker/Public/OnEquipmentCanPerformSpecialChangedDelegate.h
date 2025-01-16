#pragma once
#include "CoreMinimal.h"
#include "OnEquipmentCanPerformSpecialChangedDelegate.generated.h"

class ABreakerWeaponProp;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquipmentCanPerformSpecialChanged, ABreakerWeaponProp*, WeaponProp, bool, bCanPerformSpecial);

