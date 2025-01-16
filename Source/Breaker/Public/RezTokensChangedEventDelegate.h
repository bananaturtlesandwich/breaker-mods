#pragma once
#include "CoreMinimal.h"
#include "RezTokensChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRezTokensChangedEvent, int32, NewAmount, int32, OldAmount);

