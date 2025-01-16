#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AudioDebugInterface.h"
#include "BreakerOceanShorePlayer.generated.h"

class ADecker;
class APawn;
class UBreakerAkComponent;

UCLASS(Abstract, Blueprintable)
class BREAKER_API ABreakerOceanShorePlayer : public AActor, public IAudioDebugInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerAkComponent* BreakerAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToTeleportThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceFromPawn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADecker* Decker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* TargetPlayerPawn;
    
public:
    ABreakerOceanShorePlayer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetTargetBreakerPawn(APawn* Pawn);
    

    // Fix for true pure virtual functions not being implemented
};

