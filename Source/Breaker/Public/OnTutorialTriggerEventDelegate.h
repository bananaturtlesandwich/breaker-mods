#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnTutorialTriggerEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTutorialTriggerEvent, const TArray<FGameplayTag>&, TutorialTags);

