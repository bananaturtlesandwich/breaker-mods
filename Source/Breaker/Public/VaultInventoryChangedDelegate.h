#pragma once
#include "CoreMinimal.h"
#include "GenericGearInfo.h"
#include "VaultInventoryChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVaultInventoryChanged, FGenericGearInfo, GearInfo, int32, SlotIndex);

