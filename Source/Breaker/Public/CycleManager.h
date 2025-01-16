#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CycleData.h"
#include "CycleManager_CycleCompleted_EventDelegate.h"
#include "CycleManager_CycleFailed_EventDelegate.h"
#include "CycleManager_CycleHealthKitsBought_EventDelegate.h"
#include "CycleManager_CycleIndexUpdated_EventDelegate.h"
#include "CycleManager_CycleLives_EventDelegate.h"
#include "CycleManager_HubEnteredStart_EventDelegate.h"
#include "CycleManager_NewCycle_EventDelegate.h"
#include "ECycleStatus.h"
#include "CycleManager.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, Within=BreakerGameState, meta=(BlueprintSpawnableComponent))
class BREAKER_API UCycleManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CycleDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCycleData> CycleDataCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartRunIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingCycleLives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCycleDataCacheIndex;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCycleManager_NewCycle_Event OnNewCycleBegins;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCycleManager_CycleCompleted_Event OnCycleCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCycleManager_CycleFailed_Event OnCycleFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCycleManager_HubEnteredStart_Event OnHubEnteredStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCycleManager_CycleIndexUpdated_Event OnCycleIndexUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemainingRunsInCycle, meta=(AllowPrivateAccess=true))
    int32 RemainingRunsInCycle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCycleManager_CycleLives_Event OnRemainingRunsInCycleUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PredictedCycleReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool ResetCycleWhenReturningToHub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CycleStatus, meta=(AllowPrivateAccess=true))
    ECycleStatus CycleStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CycleRuns, meta=(AllowPrivateAccess=true))
    int32 CycleRuns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CycleRuns, meta=(AllowPrivateAccess=true))
    int32 CycleHealthKitsBought;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCycleManager_CycleHealthKitsBought_Event OnCycleHealthKitsBoughtUpdated;
    
    UCycleManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ResetCycle();
    
    UFUNCTION(BlueprintCallable)
    void ProceedToNextCycle();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemainingRunsInCycle();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CycleStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CycleRuns();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CycleHealthKitsBought();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ModifyCurrentCycleData_TimeOfDay(float Time);
    
    UFUNCTION(BlueprintCallable)
    bool JumpToPreviousRunInCycle();
    
    UFUNCTION(BlueprintCallable)
    bool JumpToNextRunInCycle();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeCycleData();
    
    UFUNCTION(BlueprintCallable)
    void HealthKitBought();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTimeOfDayForRunInCycle(bool& ValidCycleTime, float& TimeOfDay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingCycleLives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentCycleNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentCycleData(bool& Valid, FCycleData& Data);
    
    UFUNCTION(BlueprintCallable)
    void EnterRun();
    
    UFUNCTION(BlueprintCallable)
    void EnterHub();
    
    UFUNCTION(BlueprintCallable)
    void CompleteCycle();
    
};

