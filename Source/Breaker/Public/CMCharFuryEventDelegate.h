#pragma once
#include "CoreMinimal.h"
#include "CMCharFuryEventDelegate.generated.h"

class ACMCharBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCMCharFuryEvent, ACMCharBase*, Actor, bool, bBegan);

