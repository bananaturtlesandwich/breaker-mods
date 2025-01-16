#pragma once
#include "CoreMinimal.h"
#include "CharacterCombatActivityEvent.h"
#include "OnCharacterCombatActivityEventDelegate.generated.h"

class UCharacterCombatComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterCombatActivityEvent, UCharacterCombatComponent*, CombatComponent, FCharacterCombatActivityEvent, Event);

