#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BreakerMovementDelegate.h"
#include "BreakerSkidEventDelegate.h"
#include "MovementSkidStop.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMovementSkidStop : public UActorComponent, public IBreakerMovementDelegate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnterSpeedLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkidSeconds;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerSkidEvent WillEnterSkid;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerSkidEvent DidLeaveSkid;
    
    UMovementSkidStop(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

