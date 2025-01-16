#pragma once
#include "CoreMinimal.h"
#include "ECombatActionResult.h"
#include "CharacterCombatActionQueuedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterCombatActionQueued, ECombatActionResult, Action);

