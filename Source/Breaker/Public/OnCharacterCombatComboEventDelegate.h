#pragma once
#include "CoreMinimal.h"
#include "CharacterCombatComboEvent.h"
#include "OnCharacterCombatComboEventDelegate.generated.h"

class UCharacterCombatComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterCombatComboEvent, UCharacterCombatComponent*, CombatComponent, FCharacterCombatComboEvent, Event);

