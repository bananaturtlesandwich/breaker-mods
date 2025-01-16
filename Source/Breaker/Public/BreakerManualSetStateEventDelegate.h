#pragma once
#include "CoreMinimal.h"
#include "BreakerManualSetStateEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBreakerManualSetStateEvent, AActor*, OtherPawn, bool, IsServer, bool, bInteracted);

