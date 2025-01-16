#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BreakerAudioPriority.h"
#include "BreakerCharAudioPriority.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UBreakerCharAudioPriority : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerAudioPriority AudioPriority;
    
    UBreakerCharAudioPriority();

};

