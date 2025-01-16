#pragma once
#include "CoreMinimal.h"
#include "CMCharPoolEventDelegate.generated.h"

class ACMCharBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCMCharPoolEvent, ACMCharBase*, Actor);

