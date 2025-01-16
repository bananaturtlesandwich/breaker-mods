#pragma once
#include "CoreMinimal.h"
#include "BreakerAudioFoleyPlayerPawn.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FBreakerAudioFoleyPlayerPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FoleyCloth_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FoleyGear_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Jump_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Land_SFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DoubleJump_SFX;
    
    BREAKER_API FBreakerAudioFoleyPlayerPawn();
};

