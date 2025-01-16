#pragma once
#include "CoreMinimal.h"
#include "OnWeaponCadenceEventDelegate.generated.h"

class UCharacterCombatComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnWeaponCadenceEvent, UCharacterCombatComponent*, CombatComponent, float, TimeDifferential, float, MinTime, float, MaxTime);

