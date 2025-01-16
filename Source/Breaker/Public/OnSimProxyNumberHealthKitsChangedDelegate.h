#pragma once
#include "CoreMinimal.h"
#include "OnSimProxyNumberHealthKitsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSimProxyNumberHealthKitsChanged, int32, CurrentNumber);

