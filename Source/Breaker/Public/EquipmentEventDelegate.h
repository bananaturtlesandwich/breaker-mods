#pragma once
#include "CoreMinimal.h"
#include "ECombatActionResult.h"
#include "ECombatActionRoute.h"
#include "EquipmentEventDelegate.generated.h"

class UBreakerEquipmentComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEquipmentEvent, const UBreakerEquipmentComponent*, EquippedComponent, ECombatActionRoute, ActionRoute, ECombatActionResult, ActionResult);

