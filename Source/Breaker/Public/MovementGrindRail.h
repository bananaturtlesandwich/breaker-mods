#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BreakerMovementDelegate.h"
#include "MovementGrindRail.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMovementGrindRail : public UActorComponent, public IBreakerMovementDelegate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrindSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExponentialAccelerationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationDampSeconds;
    
    UMovementGrindRail(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

