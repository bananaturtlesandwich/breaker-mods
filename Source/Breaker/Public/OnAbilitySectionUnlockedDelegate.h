#pragma once
#include "CoreMinimal.h"
#include "OnAbilitySectionUnlockedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAbilitySectionUnlocked, int32, AbilitySection);

