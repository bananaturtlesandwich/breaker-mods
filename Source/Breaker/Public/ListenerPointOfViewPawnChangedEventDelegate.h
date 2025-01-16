#pragma once
#include "CoreMinimal.h"
#include "ListenerPointOfViewPawnChangedEventDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FListenerPointOfViewPawnChangedEvent, APawn*, Pawn);

