#pragma once
#include "CoreMinimal.h"
#include "XPAwardedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FXPAwarded, int32, Amount, const FString&, Context);

