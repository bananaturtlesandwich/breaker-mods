#pragma once
#include "CoreMinimal.h"
#include "CurrencyCostArrays.h"
#include "BreakerSetCostEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBreakerSetCostEvent, AActor*, OtherPawn, bool, IsServer, FCurrencyCostArrays, Cost);

