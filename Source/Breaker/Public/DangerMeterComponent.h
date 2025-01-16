#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DangerActionData.h"
#include "DangerEventData.h"
#include "DangerEventDifficultyModifier.h"
#include "DangerMeterComponent_DangerAddedDelegate.h"
#include "DangerMeterComponent_DangerDifficultyDecreasedDelegate.h"
#include "DangerMeterComponent_DangerDifficultyIncreasedDelegate.h"
#include "DangerMeterComponent_DangerDifficultyResetDelegate.h"
#include "DangerMeterComponent_DangerRemovedDelegate.h"
#include "DangerMeterComponent_DangerResetDelegate.h"
#include "DangerMeterComponent_DangerTriggeredDelegate.h"
#include "DangerMeterComponent_DangerTriggeredVerySoonDelegate.h"
#include "EDangerActionType.h"
#include "Templates/SubclassOf.h"
#include "DangerMeterComponent.generated.h"

class ADangerEvent;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, Within=BreakerGameState, meta=(BlueprintSpawnableComponent))
class BREAKER_API UDangerMeterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DangerMeter, meta=(AllowPrivateAccess=true))
    int32 DangerMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DangerMeterTriggerValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DangerMeterTriggerValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DangerDifficulty, meta=(AllowPrivateAccess=true))
    int32 DangerDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DangerDifficultyMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfTimesTriggeredInRun;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDangerMeterComponent_DangerReset OnDangerReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDangerMeterComponent_DangerAdded OnDangerAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDangerMeterComponent_DangerRemoved OnDangerRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDangerMeterComponent_DangerTriggered OnDangerTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDangerMeterComponent_DangerTriggeredVerySoon OnDangerTriggeredVerySoon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDangerMeterComponent_DangerDifficultyReset OnDangerDifficultyReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDangerMeterComponent_DangerDifficultyIncreased OnDangerDifficultyIncreased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDangerMeterComponent_DangerDifficultyDecreased OnDangerDifficultyDecreased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DangerActionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDangerActionData> DangerActionDataCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DangerEventDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDangerEventData> DangerEventDataCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DangerEventDifficultyModifierTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDangerEventDifficultyModifier> DangerEventDifficultyModifierDataCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADangerEvent> AdditionalDangerEventClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalDangerEventDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoDangerEventAtMaxLevel_TimeBetweenEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoDangerEventAtMaxLevel_Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADangerEvent> AutoDangerEventAtMaxLevel_Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADangerEvent*> DangerEventsInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfAdditionalDangerEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfAutoDangerEvents;
    
    UDangerMeterComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnRegisterDangerEventInProgress(ADangerEvent* DangerEvent);
    
    UFUNCTION(BlueprintCallable)
    bool TriggerDangerEvent(TSubclassOf<ADangerEvent> DangerEventClass);
    
    UFUNCTION(BlueprintCallable)
    void SetDangerDifficulty(int32 NewDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void ResetDanger();
    
    UFUNCTION(BlueprintCallable)
    void RemoveDanger(int32 DangerAmount);
    
    UFUNCTION(BlueprintCallable)
    void RegisterDangerEventInProgress(ADangerEvent* DangerEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DangerMeter();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DangerDifficulty();
    
    UFUNCTION(BlueprintCallable)
    void InitializeDangerForHostMigration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeightOfDangerEvent(int32 Difficulty, const FDangerEventData& DangerEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalWeightOfAllDangerEvents(int32 Difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalizedDanger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetModifiedDangerMeterDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDangerPointsForDangerAction(EDangerActionType DangerAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentDangerMeterTriggerValue() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DangerTriggeredVerySoon_Multicast(int32 Notification);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DangerTriggered_Multicast(FName DangerEventRowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddDanger();
    
    UFUNCTION(BlueprintCallable)
    bool AddDangerOnClient(int32 DangerAmount);
    
    UFUNCTION(BlueprintCallable)
    bool AddDangerActionOnClient(EDangerActionType DangerAction);
    
    UFUNCTION(BlueprintCallable)
    bool AddDangerAction(EDangerActionType DangerAction);
    
    UFUNCTION(BlueprintCallable)
    void AddDanger(int32 DangerAmount);
    
};

