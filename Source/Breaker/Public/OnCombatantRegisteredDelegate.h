#pragma once
#include "CoreMinimal.h"
#include "OnCombatantRegisteredDelegate.generated.h"

class UChoreographyComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCombatantRegistered, UChoreographyComponent*, registeredChoreographyComponent);

