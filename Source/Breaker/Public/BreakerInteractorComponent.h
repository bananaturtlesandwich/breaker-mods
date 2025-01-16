#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "CurrencyCostArrays.h"
#include "SimpleInteractorEventDelegate.h"
#include "BreakerInteractorComponent.generated.h"

class UBreakerInteractableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerInteractorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionRange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleInteractorEvent OnNearestInteractableChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleInteractorEvent OnInteractionStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleInteractorEvent OnInteractionEnd;
    
    UBreakerInteractorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryBeginInteracting();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetInteractableStateAtLocation(FVector Location, bool bInteracted);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetInteractableCostAtLocation(FVector Location, FCurrencyCostArrays CostArrays);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBreakerInteractableComponent* NearestInteractable() const;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetInteractableStateAtLocation(FVector Location, bool bInteracted);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetInteractableCostAtLocation(FVector Location, FCurrencyCostArrays CostArrays);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Interact_Server(UBreakerInteractableComponent* ClientCurrentInteractible);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Interact_Multicast(UBreakerInteractableComponent* ClientCurrentInteractible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNearbyInteractable() const;
    
    UFUNCTION(BlueprintCallable)
    void EndInteracting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAffordNearbyInteractable() const;
    
};

