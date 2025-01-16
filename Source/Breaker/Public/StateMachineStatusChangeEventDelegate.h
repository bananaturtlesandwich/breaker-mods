#pragma once
#include "CoreMinimal.h"
#include "StateMachineStatusChangeEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateMachineStatusChangeEvent, FName, PrevState, FName, NextState);

