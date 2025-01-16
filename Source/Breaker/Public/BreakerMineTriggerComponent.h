#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/SphereComponent.h"
#include "BreakerMineEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "BreakerMineTriggerComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerMineTriggerComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerMineEvent OnTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerMineEvent OnExploded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> RequiredActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> IgnoreActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplodeDelay;
    
public:
    UBreakerMineTriggerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Trigger(AActor* Instigator, bool bExplodeImmediately);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnTriggered_Multicast(AActor* Instigator, bool bExplodeImmediately);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenTriggered() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Explode();
    
    UFUNCTION(BlueprintCallable)
    void CatchBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

