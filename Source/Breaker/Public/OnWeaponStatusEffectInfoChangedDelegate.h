#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnWeaponStatusEffectInfoChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWeaponStatusEffectInfoChanged, FGameplayTag, WeaponStatusEffectTag, int32, WeaponStatusEffectLevel);

