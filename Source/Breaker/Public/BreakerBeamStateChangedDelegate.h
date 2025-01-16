#pragma once
#include "CoreMinimal.h"
#include "BreakerBeamStateChangedDelegate.generated.h"

class UBreakerBeamAttackComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBreakerBeamStateChanged, UBreakerBeamAttackComponent*, BeamComponent);

