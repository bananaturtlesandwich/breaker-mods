#pragma once
#include "CoreMinimal.h"
#include "OnDebugLockChangedDelegate.generated.h"

class AActor;
class UDebugTargetTracker;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDebugLockChanged, UDebugTargetTracker*, Tracker, AActor*, Target, bool, bLockedOn);

