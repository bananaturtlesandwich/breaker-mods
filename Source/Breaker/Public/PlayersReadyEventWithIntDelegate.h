#pragma once
#include "CoreMinimal.h"
#include "PlayersReadyEventWithIntDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayersReadyEventWithInt, int32, IntInfo);

