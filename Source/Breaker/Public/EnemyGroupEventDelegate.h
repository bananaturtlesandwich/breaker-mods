#pragma once
#include "CoreMinimal.h"
#include "EnemyGroupEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnemyGroupEvent, int32, GroupId, int32, ActiveEnemies);

