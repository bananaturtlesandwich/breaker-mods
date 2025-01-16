#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StateMachineStatusChangeEventDelegate.h"
#include "BreakerStateMachineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBreakerStateMachineComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Status, meta=(AllowPrivateAccess=true))
    FName Status;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateMachineStatusChangeEvent OnStatusChanged;
    
    UBreakerStateMachineComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryTransitionStatus(FName FromStatus, FName ToStatus);
    
    UFUNCTION(BlueprintCallable)
    bool TrySetStatus(FName NewStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float StatusTimeElapsed() const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetStatus_Server(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Status();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrent(FName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetStatus() const;
    
};

