#pragma once
#include "CoreMinimal.h"
#include "EAkCurveInterpolation.h"
#include "Components/ActorComponent.h"
#include "ProjectileAudioComponent.generated.h"

class UAkAudioEvent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UProjectileAudioComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ProjectileSpawnSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ProjectileExplodeSFX;
    
public:
    UProjectileAudioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopProjectileSFX(int32 OnStopFadeOutMs, EAkCurveInterpolation OnStopFadeOutCurve, bool bExplode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayProjectileSpawnSFX();
    
};

