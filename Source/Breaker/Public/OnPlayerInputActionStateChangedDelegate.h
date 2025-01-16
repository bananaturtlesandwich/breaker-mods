#pragma once
#include "CoreMinimal.h"
#include "OnPlayerInputActionStateChangedDelegate.generated.h"

class UBreakerPawnInputActions;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerInputActionStateChanged, UBreakerPawnInputActions*, InputActions, bool, bActivated);

