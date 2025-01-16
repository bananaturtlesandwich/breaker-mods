#pragma once
#include "CoreMinimal.h"
#include "AkLoopEvent.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FAkLoopEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LoopStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LoopStop;
    
    BREAKER_API FAkLoopEvent();
};

