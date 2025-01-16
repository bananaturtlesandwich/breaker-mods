#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MultiPositionAmbientAudioPlayer.generated.h"

UCLASS(Abstract, Blueprintable)
class BREAKER_API AMultiPositionAmbientAudioPlayer : public AActor {
    GENERATED_BODY()
public:
    AMultiPositionAmbientAudioPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAllMultiPositionAudio();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAllMultiPositionAudio();
    
};

