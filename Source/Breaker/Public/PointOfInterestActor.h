#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PointOfInterestActor.generated.h"

class UPointOfInterestComponent;

UCLASS(Blueprintable)
class BREAKER_API APointOfInterestActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointOfInterestComponent* PointOfInterestComponent;
    
public:
    APointOfInterestActor(const FObjectInitializer& ObjectInitializer);

};

