#pragma once
#include "CoreMinimal.h"
#include "OnTargetChangedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnTargetChangedDelegate, AActor*, nextTarget, AActor*, previousTarget, bool, bTriggeredAggro, float, serverTimeSeconds);

