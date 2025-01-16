#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnQuestUpdatedDelegate.generated.h"

class UBreakerQuestManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuestUpdated, UBreakerQuestManager*, QuestManager, FGameplayTag, QuestTag);

