#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BreakerMovementDelegate.h"
#include "MovementBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMovementBase : public UActorComponent, public IBreakerMovementDelegate {
    GENERATED_BODY()
public:
    UMovementBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

