#pragma once
#include "CoreMinimal.h"
#include "InteractableTooExpensiveEventDelegate.generated.h"

class UBreakerInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractableTooExpensiveEvent, UBreakerInteractableComponent*, InteractableComponent);

