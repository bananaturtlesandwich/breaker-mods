#pragma once
#include "CoreMinimal.h"
#include "BreakerInteractEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBreakerInteractEvent, AActor*, OtherPawn, bool, IsServer);

