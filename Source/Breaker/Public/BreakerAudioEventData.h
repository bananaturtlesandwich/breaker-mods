#pragma once
#include "CoreMinimal.h"
#include "AkActionOnEventType.h"
#include "EAkCurveInterpolation.h"
#include "BreakerAudioEventData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FBreakerAudioEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AkActionOnEventType OnStopActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnStopFadeOutMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAkCurveInterpolation OnStopFadeOutCurve;
    
    BREAKER_API FBreakerAudioEventData();
};

