#pragma once
#include "CoreMinimal.h"
#include "OnMostRecentBladeChangedDelegate.generated.h"

class UCharacterCombatComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMostRecentBladeChanged, UCharacterCombatComponent*, CombatComponent, bool, bIsPrimary);

