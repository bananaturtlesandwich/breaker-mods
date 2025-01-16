#pragma once
#include "CoreMinimal.h"
#include "ParryEventPayload.h"
#include "SimpleParryEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleParryEvent, const FParryEventPayload&, Event);

