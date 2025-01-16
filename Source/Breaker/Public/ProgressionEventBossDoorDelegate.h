#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ProgressionEventBossDoorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProgressionEventBossDoor, FGameplayTag, Biome);

