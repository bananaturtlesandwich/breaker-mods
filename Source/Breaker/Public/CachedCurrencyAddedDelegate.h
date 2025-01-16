#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "CachedCurrencyAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCachedCurrencyAdded, ECurrencyType, CurrencyType, int32, Amount);

