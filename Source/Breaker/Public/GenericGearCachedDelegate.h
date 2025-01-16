#pragma once
#include "CoreMinimal.h"
#include "GenericGearInfo.h"
#include "GenericGearCachedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGenericGearCached, FGenericGearInfo, CachedGear, int32, CachedAtSlot);

