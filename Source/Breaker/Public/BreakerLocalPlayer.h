#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "BreakerLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class BREAKER_API UBreakerLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UBreakerLocalPlayer();

};

