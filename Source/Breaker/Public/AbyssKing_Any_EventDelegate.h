#pragma once
#include "CoreMinimal.h"
#include "EGlobalEvent_AbyssKingState.h"
#include "AbyssKing_Any_EventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbyssKing_Any_Event, EGlobalEvent_AbyssKingState, AbyssKingState);

