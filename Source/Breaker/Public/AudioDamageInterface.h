#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BreakerDamage.h"
#include "AudioDamageInterface.generated.h"

class UAkAudioEvent;

UINTERFACE(Blueprintable)
class UAudioDamageInterface : public UInterface {
    GENERATED_BODY()
};

class IAudioDamageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetAttackImpact_SFX(FBreakerDamage DamageData, UAkAudioEvent*& AudioEvent);
    
};

