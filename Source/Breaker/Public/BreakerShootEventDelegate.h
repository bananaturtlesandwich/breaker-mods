#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BreakerShootEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBreakerShootEvent, FVector, Origin, FVector, Direction);

