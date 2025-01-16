#pragma once
#include "CoreMinimal.h"
#include "OnRunStartEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRunStartEnd, bool, bRunStart);

