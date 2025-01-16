#pragma once
#include "CoreMinimal.h"
#include "BreakerAudioVoiceEffort.h"
#include "BreakerCharAudioDataBase.h"
#include "BreakerCharAudioDataMiniBoss.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UBreakerCharAudioDataMiniBoss : public UBreakerCharAudioDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerAudioVoiceEffort AudioVoiceEffort;
    
    UBreakerCharAudioDataMiniBoss();

};

