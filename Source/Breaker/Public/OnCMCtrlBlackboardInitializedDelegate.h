#pragma once
#include "CoreMinimal.h"
#include "OnCMCtrlBlackboardInitializedDelegate.generated.h"

class ACMCtrlBase;
class UBlackboardComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCMCtrlBlackboardInitialized, ACMCtrlBase*, CMController, UBlackboardComponent*, BlackboardComponent);

