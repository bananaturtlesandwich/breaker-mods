#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SummonedCompanionGroupEventDelegate.generated.h"

class UCharacterCombatComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSummonedCompanionGroupEvent, UCharacterCombatComponent*, CombatComp, const FGameplayTag&, GroupTag);

