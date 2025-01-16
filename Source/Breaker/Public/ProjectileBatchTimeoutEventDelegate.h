#pragma once
#include "CoreMinimal.h"
#include "ProjectileBatchTimeoutEventDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProjectileBatchTimeoutEvent, UObject*, UserData);

