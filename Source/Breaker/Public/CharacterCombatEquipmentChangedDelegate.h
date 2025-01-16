#pragma once
#include "CoreMinimal.h"
#include "ECharacterEquipmentSlot.h"
#include "GenericGearInfo.h"
#include "CharacterCombatEquipmentChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCharacterCombatEquipmentChanged, ECharacterEquipmentSlot, EquipmentSlot, FGenericGearInfo, OldGearInfo, FGenericGearInfo, NewGearInfo);

