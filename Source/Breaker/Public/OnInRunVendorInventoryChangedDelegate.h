#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnInRunVendorInventoryChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInRunVendorInventoryChanged, FGameplayTag, InRunVendorTag);

