#pragma once
#include "CoreMinimal.h"
#include "OnJumpEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJumpEvent, int32, WhichJump);

