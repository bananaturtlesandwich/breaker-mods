#pragma once
#include "CoreMinimal.h"
#include "BreakerAudioVoiceEffort.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FBreakerAudioVoiceEffort {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Effort_LargeLong_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Effort_LargeShort_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Effort_MediumLong_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Effort_MediumShort_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Effort_Small_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Effort_Tiny_SFX;
    
    BREAKER_API FBreakerAudioVoiceEffort();
};

