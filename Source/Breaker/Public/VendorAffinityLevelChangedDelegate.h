#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VendorAffinityLevelChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVendorAffinityLevelChanged, FGameplayTag, VendorTag, int32, NewAffinityLevel);

