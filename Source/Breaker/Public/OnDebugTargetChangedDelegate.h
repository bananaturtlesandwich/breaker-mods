#pragma once
#include "CoreMinimal.h"
#include "OnDebugTargetChangedDelegate.generated.h"

class AActor;
class UDebugTargetTracker;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDebugTargetChanged, UDebugTargetTracker*, Tracker, AActor*, OldTarget, AActor*, NewTarget);

