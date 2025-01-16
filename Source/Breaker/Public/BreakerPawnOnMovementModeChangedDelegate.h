#pragma once
#include "CoreMinimal.h"
#include "BreakerPawnOnMovementModeChangedDelegate.generated.h"

class ABreakerPawn;
class IBreakerMovementDelegate;
class UBreakerMovementDelegate;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBreakerPawnOnMovementModeChanged, ABreakerPawn*, Owner, TScriptInterface<IBreakerMovementDelegate>, PrevState, TScriptInterface<IBreakerMovementDelegate>, CurrState);

