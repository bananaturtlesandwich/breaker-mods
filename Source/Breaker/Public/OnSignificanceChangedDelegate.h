#pragma once
#include "CoreMinimal.h"
#include "ESignificanceLevel.h"
#include "OnSignificanceChangedDelegate.generated.h"

class USignificanceResponderComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSignificanceChanged, USignificanceResponderComponent*, Component, ESignificanceLevel, OldSignificance, ESignificanceLevel, NewSignificance);

