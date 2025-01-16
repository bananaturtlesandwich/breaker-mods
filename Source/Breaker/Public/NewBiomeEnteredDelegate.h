#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NewBiomeEnteredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNewBiomeEntered, FGameplayTag, old_biome, FGameplayTag, Biome);

