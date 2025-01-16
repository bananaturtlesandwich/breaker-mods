#pragma once
#include "CoreMinimal.h"
#include "PlayersReadyEventWithStringIntDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayersReadyEventWithStringInt, FText, StringInfo, int32, IntInfo);

