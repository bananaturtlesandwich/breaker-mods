#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CurrencyCostMap.h"
#include "ShrineManager_Activation_EventDelegate.h"
#include "ShrineManager.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UShrineManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShrineActivationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShrineActivationTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShrinesActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShrineManager_Activation_Event OnShrinesActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumberOfShrineRevivesInRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyCostMap ReviveCostBaseMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyCostMap ReviveCostIncreaseMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyCostMap HealthKitCostBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthKitCostIncrease;
    
    UShrineManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ShrinesActivated_Multicast();
    
    UFUNCTION(BlueprintCallable)
    void ShrineReviveUsed();
    
    UFUNCTION(BlueprintCallable)
    void ResetShrineManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCurrencyCostMap GetShrineReviveCostMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCurrencyCostMap GetShrineHealthKitCost();
    
};

