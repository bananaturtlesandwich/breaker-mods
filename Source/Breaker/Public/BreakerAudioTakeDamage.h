#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BreakerAudioTakeDamage.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FBreakerAudioTakeDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PainVoice_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DeathVoice_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Death_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BodyMaterialType;
    
    BREAKER_API FBreakerAudioTakeDamage();
};

