#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BreakerStateDelegate.h"
#include "StateEventDelegate.h"
#include "StateTickEventDelegate.h"
#include "BreakerStateListenerComponent.generated.h"

class UBreakerStateMachineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBreakerStateListenerComponent : public UActorComponent, public IBreakerStateDelegate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsServerOnly;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateEvent OnEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTickEvent OnTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateEvent OnTimeout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateEvent OnExit;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerStateMachineComponent* StateMachine;
    
public:
    UBreakerStateListenerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float UntilDeadline() const;
    
    UFUNCTION(BlueprintCallable)
    bool TryEnterWithDeadline(float TimeoutDuration);
    
    UFUNCTION(BlueprintCallable)
    bool TryEnter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDeadline() const;
    

    // Fix for true pure virtual functions not being implemented
};

