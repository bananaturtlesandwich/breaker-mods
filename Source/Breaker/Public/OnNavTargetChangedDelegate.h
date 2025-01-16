#pragma once
#include "CoreMinimal.h"
#include "OnNavTargetChangedDelegate.generated.h"

class AActor;
class UNavToTargetMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNavTargetChanged, UNavToTargetMovementComponent*, Component, AActor*, OldTarget);

