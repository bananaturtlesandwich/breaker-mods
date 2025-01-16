#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "CharacterCurrencyChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCharacterCurrencyChanged, ECurrencyType, CurrencyType, int32, Amount, int32, OldAmount);

