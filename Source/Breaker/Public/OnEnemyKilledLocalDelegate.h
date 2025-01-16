#pragma once
#include "CoreMinimal.h"
#include "BreakerAttackReport.h"
#include "OnEnemyKilledLocalDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnemyKilledLocal, FBreakerAttackReport, AttackInfo);

