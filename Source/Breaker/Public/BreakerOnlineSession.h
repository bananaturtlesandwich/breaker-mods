#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineSession.h"
#include "BreakerOnlineSession.generated.h"

UCLASS(Blueprintable, Transient)
class BREAKER_API UBreakerOnlineSession : public UOnlineSession {
    GENERATED_BODY()
public:
    UBreakerOnlineSession();

};

