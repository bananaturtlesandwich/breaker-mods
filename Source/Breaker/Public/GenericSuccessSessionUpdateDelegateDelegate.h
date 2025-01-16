#pragma once
#include "CoreMinimal.h"
#include "GenericSuccessSessionUpdateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGenericSuccessSessionUpdateDelegate, bool, bSuccess);

