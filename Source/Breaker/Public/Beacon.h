#pragma once
#include "CoreMinimal.h"
#include "ADA.h"
#include "EBeaconActivityState.h"
#include "Templates/SubclassOf.h"
#include "TestMonkeyReflectableInterface.h"
#include "Beacon.generated.h"

class AActor;
class ABeaconEvent;
class ACMCharBase;
class UActorComponent;

UCLASS(Abstract, Blueprintable)
class BREAKER_API ABeacon : public AADA, public ITestMonkeyReflectableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BeaconState, meta=(AllowPrivateAccess=true))
    EBeaconActivityState BeaconState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TurretClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> TurretComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ABeaconEvent* BeaconEvent;
    
    ABeacon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Server_SetBeaconState(EBeaconActivityState State);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BeaconState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeaconStateUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeaconStateInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeaconStateFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeaconStateCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeaconStateActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInactive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ACMCharBase* GetEliteEnemy();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Fail();
    
    UFUNCTION(BlueprintCallable)
    void Complete();
    

    // Fix for true pure virtual functions not being implemented
};

