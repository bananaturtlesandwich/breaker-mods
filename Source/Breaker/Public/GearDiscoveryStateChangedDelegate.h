#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EEquipmentSchematicState.h"
#include "GearDiscoveryStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGearDiscoveryStateChanged, FGameplayTag, GearTag, EEquipmentSchematicState, NewState);

