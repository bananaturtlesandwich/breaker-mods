#pragma once
#include "CoreMinimal.h"
#include "OnNavToTargetMovedDelegate.generated.h"

class UNavToTargetMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNavToTargetMoved, UNavToTargetMovementComponent*, Component);

