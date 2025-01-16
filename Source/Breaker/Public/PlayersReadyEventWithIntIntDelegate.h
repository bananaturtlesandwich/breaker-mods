#pragma once
#include "CoreMinimal.h"
#include "PlayersReadyEventWithIntIntDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayersReadyEventWithIntInt, int32, IntInfo1, int32, IntInfo2);

