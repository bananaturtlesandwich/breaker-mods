#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BreakerAudioSurfaceSounds.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FBreakerAudioSurfaceSounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Footstep_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Footslide_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BodyFall_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FootstepType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BodyFallType;
    
    BREAKER_API FBreakerAudioSurfaceSounds();
};

