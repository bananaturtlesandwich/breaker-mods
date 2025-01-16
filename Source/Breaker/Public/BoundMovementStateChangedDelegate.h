#pragma once
#include "CoreMinimal.h"
#include "BoundMovementStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoundMovementStateChanged, bool, bIsBound);

