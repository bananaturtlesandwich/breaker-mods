#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ReadyEventDelegate.h"
#include "ReplicatedReadyStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UReplicatedReadyStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadyEvent ReadyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadyEvent ActivatedEvent;
    
    UReplicatedReadyStateComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StateReady();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayerSetReady(int32 PlayerId);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AllPlayersReady();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ActivatedEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void LocalPlayerSetReadied();
    
};

