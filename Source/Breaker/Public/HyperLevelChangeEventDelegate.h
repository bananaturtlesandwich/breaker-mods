#pragma once
#include "CoreMinimal.h"
#include "ELevelState.h"
#include "HyperLevelChangeEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHyperLevelChangeEvent, ELevelState, NewLevel, ELevelState, OldLevel);

