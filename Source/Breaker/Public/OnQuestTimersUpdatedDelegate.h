#pragma once
#include "CoreMinimal.h"
#include "OnQuestTimersUpdatedDelegate.generated.h"

class UBreakerQuestManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestTimersUpdated, UBreakerQuestManager*, QuestManager);

