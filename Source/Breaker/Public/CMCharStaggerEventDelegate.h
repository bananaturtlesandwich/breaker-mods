#pragma once
#include "CoreMinimal.h"
#include "CMCharStaggerEventDelegate.generated.h"

class ACMCharBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCMCharStaggerEvent, ACMCharBase*, Actor, bool, bIsStaggered);

