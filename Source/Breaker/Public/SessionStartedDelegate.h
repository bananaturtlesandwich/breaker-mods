#pragma once
#include "CoreMinimal.h"
#include "SessionStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSessionStarted, FName, SessionName, bool, bSuccess);

