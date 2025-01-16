#pragma once
#include "CoreMinimal.h"
#include "EBeamAttackState.h"
#include "BreakerBeamAttackStateChangedDelegate.generated.h"

class UBreakerBeamAttackComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBreakerBeamAttackStateChanged, UBreakerBeamAttackComponent*, BeamComponent, EBeamAttackState, State);

