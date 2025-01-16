#pragma once
#include "CoreMinimal.h"
#include "NetworkEventDelegate.generated.h"

class UBreakerSessions;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNetworkEvent, UBreakerSessions*, NetworkSessionManager);

