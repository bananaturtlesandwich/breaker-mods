#pragma once
#include "CoreMinimal.h"
#include "BreakerAudioVoicePlayerPawn.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FBreakerAudioVoicePlayerPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Effort_HeavyLanding_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Effort_Heal_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Effort_Pickup_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Effort_Trick_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Effort_Victory_SFX;
    
    BREAKER_API FBreakerAudioVoicePlayerPawn();
};

