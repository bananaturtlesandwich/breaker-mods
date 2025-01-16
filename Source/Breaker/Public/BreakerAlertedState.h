#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BreakerAlertEventDelegate.h"
#include "BreakerStateDelegate.h"
#include "CharacterMovementInputState.h"
#include "BreakerAlertedState.generated.h"

class ABreakerPawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerAlertedState : public UActorComponent, public ICharacterMovementInputState, public IBreakerStateDelegate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABreakerPawn* TargetToFace;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerAlertEvent OnAlertStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerAlertEvent OnAlertCompleted;
    
    UBreakerAlertedState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName State_GetName() const;
    

    // Fix for true pure virtual functions not being implemented
};

