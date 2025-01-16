#pragma once
#include "CoreMinimal.h"
#include "CharacterEquipmentDetails.h"
#include "CharacterEquipmentDetailsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterEquipmentDetailsChanged, FCharacterEquipmentDetails, EquipmentDetails);

