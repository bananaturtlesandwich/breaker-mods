#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BreakerPawnLocalTriggerDelegate.h"
#include "LocalTriggerInteriorCamera.generated.h"

UCLASS(Abstract, Blueprintable)
class ALocalTriggerInteriorCamera : public AActor, public IBreakerPawnLocalTriggerDelegate {
    GENERATED_BODY()
public:
    ALocalTriggerInteriorCamera(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

