#pragma once
#include "CoreMinimal.h"
#include "EUIInputDeviceType.h"
#include "LatestInputDeviceTypeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLatestInputDeviceTypeChanged, EUIInputDeviceType, LatestInputDeviceType);

