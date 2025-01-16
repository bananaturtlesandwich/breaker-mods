#pragma once
#include "CoreMinimal.h"
#include "StateTickEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateTickEvent, float, DeltaTime);

