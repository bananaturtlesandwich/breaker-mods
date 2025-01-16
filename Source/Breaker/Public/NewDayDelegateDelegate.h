#pragma once
#include "CoreMinimal.h"
#include "NewDayDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewDayDelegate, int32, Day);

