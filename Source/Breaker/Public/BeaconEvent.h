#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BeaconEvent.generated.h"

class ABeacon;

UCLASS(Blueprintable)
class BREAKER_API ABeaconEvent : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ABeacon* Beacon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HurryUpTime;
    
    ABeaconEvent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTakeDamage_Server(int32 DamageAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHurryUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFail();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHurryUpTime();
    
};

