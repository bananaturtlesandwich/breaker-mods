#pragma once
#include "CoreMinimal.h"
#include "EnemyParryEventPayload.h"
#include "CMCharParryEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCMCharParryEvent, FEnemyParryEventPayload, Event);

