#pragma once
#include "CoreMinimal.h"
#include "OnNumberOfHealthKitsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNumberOfHealthKitsChanged, int32, PreviousNumberOfHealthKits, int32, NewNumberOfHealthKits);

