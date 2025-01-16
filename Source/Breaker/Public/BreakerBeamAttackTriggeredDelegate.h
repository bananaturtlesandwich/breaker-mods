#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BreakerBeamAttackTriggeredDelegate.generated.h"

class UBreakerBeamAttackComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBreakerBeamAttackTriggered, UBreakerBeamAttackComponent*, BeamComponent, FVector, TargetPos);

