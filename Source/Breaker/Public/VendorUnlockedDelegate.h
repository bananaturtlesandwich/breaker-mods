#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VendorUnlockedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVendorUnlocked, FGameplayTag, VendorTag);

