#pragma once
#include "CoreMinimal.h"
#include "CharacterCombatEquipmentInfusedDelegate.generated.h"

class ABreakerWeaponProp;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterCombatEquipmentInfused, ABreakerWeaponProp*, WeaponProp);

