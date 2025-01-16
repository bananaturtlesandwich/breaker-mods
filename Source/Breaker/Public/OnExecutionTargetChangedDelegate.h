#pragma once
#include "CoreMinimal.h"
#include "OnExecutionTargetChangedDelegate.generated.h"

class ABreakerPawn;
class ACMCharBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnExecutionTargetChanged, ABreakerPawn*, PlayerPawn, ACMCharBase*, ExecutionTarget);

