#pragma once
#include "CoreMinimal.h"
#include "SummonedCompanionInfo.h"
#include "SummonedCompanionEventDelegate.generated.h"

class UCharacterCombatComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSummonedCompanionEvent, UCharacterCombatComponent*, CombatComp, const FSummonedCompanionInfo&, CompanionInfo);

