#pragma once
#include "CoreMinimal.h"
#include "AudioEventsCollection.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct BREAKER_API FAudioEventsCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnDamagedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnMeleeDamagedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnRangedDamagedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnDeathSound;
    
    FAudioEventsCollection();
};

