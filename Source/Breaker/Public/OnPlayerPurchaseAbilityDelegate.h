#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnPlayerPurchaseAbilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerPurchaseAbility, FGameplayTag, AbilityTag, int32, AbilityLevel);

