#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BreakerHazardVolumeActor.generated.h"

class UBreakerHazardVolume;

UCLASS(Blueprintable)
class BREAKER_API ABreakerHazardVolumeActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerHazardVolume* HazardVolume;
    
public:
    ABreakerHazardVolumeActor(const FObjectInitializer& ObjectInitializer);

};

