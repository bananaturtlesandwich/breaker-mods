#pragma once
#include "CoreMinimal.h"
#include "BreakerSessionSearchResult.h"
#include "OnNetworkSessionInvitationEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNetworkSessionInvitationEvent, FBreakerSessionSearchResult, Invitation);

