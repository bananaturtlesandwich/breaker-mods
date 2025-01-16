#pragma once
#include "CoreMinimal.h"
#include "EBossState.h"
#include "BossFightEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBossFightEvent, EBossState, NewState, EBossState, OldState);

