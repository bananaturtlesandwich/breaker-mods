#pragma once
#include "CoreMinimal.h"
#include "BreakerSessionSearchResult.h"
#include "OnFindSessionToUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFindSessionToUpdate, FBreakerSessionSearchResult, UpdatedSession, bool, bSuccess);

