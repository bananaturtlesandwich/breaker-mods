#pragma once
#include "CoreMinimal.h"
#include "OnCombatantUnregisteredDelegate.generated.h"

class UChoreographyComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCombatantUnregistered, UChoreographyComponent*, unregisteredChoreographyComponent);

