#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "RawKeyEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRawKeyEvent, const FKeyEvent&, Key, bool, bDown);

