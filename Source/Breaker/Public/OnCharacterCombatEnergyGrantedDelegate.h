#pragma once
#include "CoreMinimal.h"
#include "OnCharacterCombatEnergyGrantedDelegate.generated.h"

class UCharacterCombatComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterCombatEnergyGranted, UCharacterCombatComponent*, CombatComponent, int32, EnergyPoints);

