#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NewZoneEnteredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNewZoneEntered, FGameplayTag, old_zone, FGameplayTag, Zone);

