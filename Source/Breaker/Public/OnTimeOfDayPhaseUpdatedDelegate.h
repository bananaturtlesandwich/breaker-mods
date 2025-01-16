#pragma once
#include "CoreMinimal.h"
#include "OnTimeOfDayPhaseUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimeOfDayPhaseUpdated, FName, TimeOfDay);

