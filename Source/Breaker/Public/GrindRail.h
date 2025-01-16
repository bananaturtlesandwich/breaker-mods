#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BreakerPawnLocalTriggerDelegate.h"
#include "GrindRail.generated.h"

class USplineComponent;

UCLASS(Abstract, Blueprintable)
class AGrindRail : public AActor, public IBreakerPawnLocalTriggerDelegate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachSpeed;
    
    AGrindRail(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

