#pragma once
#include "CoreMinimal.h"
#include "OnEquipmentEffectStackChangedDelegate.generated.h"

class ABreakerWeaponProp;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquipmentEffectStackChanged, ABreakerWeaponProp*, WeaponProp, int32, StackLevel);

