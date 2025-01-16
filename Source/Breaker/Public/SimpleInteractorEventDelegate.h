#pragma once
#include "CoreMinimal.h"
#include "SimpleInteractorEventDelegate.generated.h"

class UBreakerInteractorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleInteractorEvent, UBreakerInteractorComponent*, InteractorComp);

