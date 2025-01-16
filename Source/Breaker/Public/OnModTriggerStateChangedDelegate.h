#pragma once
#include "CoreMinimal.h"
#include "OnModTriggerStateChangedDelegate.generated.h"

class ABreakerMod;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnModTriggerStateChanged, ABreakerMod*, Mod);

