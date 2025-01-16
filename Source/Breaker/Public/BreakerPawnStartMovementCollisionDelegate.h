#pragma once
#include "CoreMinimal.h"
#include "BreakerPawnStartMovementCollisionDelegate.generated.h"

class ABreakerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBreakerPawnStartMovementCollision, ABreakerPawn*, BPawn);

