#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BreakerGrappleEventDelegate.h"
#include "BreakerMovementDelegate.h"
#include "MovementGrapple.generated.h"

class ABreakerPawn;
class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, Within=BreakerPawn, meta=(BlueprintSpawnableComponent))
class UMovementGrapple : public UActorComponent, public IBreakerMovementDelegate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialWaitRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinalWaitRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideCrossfadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallbackDuration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerGrappleEvent OnGrappleBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerGrappleEvent OnGrappleInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerGrappleEvent OnGrappleComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Anim;
    
public:
    UMovementGrapple(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerPawn* GetCharacterPawn() const;
    

    // Fix for true pure virtual functions not being implemented
};

