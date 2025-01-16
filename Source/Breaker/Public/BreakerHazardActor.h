#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BreakerHazardActor.generated.h"

class UBreakerHazardComponent;

UCLASS(Blueprintable)
class BREAKER_API ABreakerHazardActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerHazardComponent* HazardComponent;
    
public:
    ABreakerHazardActor(const FObjectInitializer& ObjectInitializer);

};

