#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BreakerPendingPlayerController.generated.h"

UCLASS(Blueprintable)
class BREAKER_API ABreakerPendingPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    ABreakerPendingPlayerController(const FObjectInitializer& ObjectInitializer);

};

