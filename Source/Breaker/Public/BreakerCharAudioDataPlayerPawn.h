#pragma once
#include "CoreMinimal.h"
#include "BreakerAudioFoleyPlayerPawn.h"
#include "BreakerAudioVoiceEffort.h"
#include "BreakerAudioVoicePlayerPawn.h"
#include "BreakerCharAudioDataBase.h"
#include "BreakerCharAudioDataPlayerPawn.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UBreakerCharAudioDataPlayerPawn : public UBreakerCharAudioDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerAudioVoiceEffort AudioVoiceEffort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerAudioVoicePlayerPawn AudioVoicePlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerAudioFoleyPlayerPawn AudioFoleyPlayerPawn;
    
    UBreakerCharAudioDataPlayerPawn();

};

