#pragma once
#include "CoreMinimal.h"
#include "ECharacterEquipmentSlot.h"
#include "OnAmpActivatedEventDelegate.generated.h"

class ABreakerWeaponProp;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAmpActivatedEvent, ABreakerWeaponProp*, WeaponProp, ECharacterEquipmentSlot, EquipmentSlot);

