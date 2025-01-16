#pragma once
#include "CoreMinimal.h"
#include "BreakerMineEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBreakerMineEvent, AActor*, Instigator);

