#pragma once
#include "CoreMinimal.h"
#include "BreakerPawnFinishMovementCollisionDelegate.generated.h"

class ABreakerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBreakerPawnFinishMovementCollision, ABreakerPawn*, BPawn);

