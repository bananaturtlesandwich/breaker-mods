#pragma once
#include "CoreMinimal.h"
#include "BreakerEnemyAudioEventDataContainer.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FBreakerEnemyAudioEventDataContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent;
    
    BREAKER_API FBreakerEnemyAudioEventDataContainer();
};

