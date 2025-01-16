#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameStateBase.h"
#include "GameplayTagContainer.h"
#include "AttributeComponentInterface.h"
#include "BeaconInProgressChangedEventDelegate.h"
#include "BossesDefeatedUpdatedDelegate.h"
#include "BreakerAttackReport.h"
#include "BreakerRunTimeInfo.h"
#include "CurrencyCostMap.h"
#include "DebugClassLocation.h"
#include "ELastRunEndState.h"
#include "OnHyperLevelSetupSetDelegate.h"
#include "OnTimeOfDayActorRegisteredDelegate.h"
#include "ProgressionEventBossDoorDelegate.h"
#include "ProgressionEventDelegate.h"
#include "QuestInfo.h"
#include "RunExtractionEventDelegate.h"
#include "RunExtractionZoneEnteredEventDelegate.h"
#include "RunExtractionZoneExitedEventDelegate.h"
#include "RunTimerEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "UnlockedDoor.h"
#include "BreakerGameState.generated.h"

class AADA;
class AActor;
class ABeacon;
class ABreakerGameState;
class ADecker;
class AExtractionBeam;
class AGearItemDrop;
class AGlobalEvent_AbyssKing;
class AHyperLevelSetup;
class APlayerState;
class IAttributeContainerInterface;
class UAttributeContainerInterface;
class UAssassinManager;
class UAttributeContainerComponent;
class UBossFightManager;
class UBreakerGlobalEvents;
class UBreakerStageManager;
class UCycleManager;
class UDangerMeterComponent;
class UDaytimeCycleComponent;
class UEncounterManager;
class UEnemyGroupTracker;
class ULockedDoorComponent;
class UObject;
class UPlayerCharacterInfo;
class UReadyUpComponent;
class UReplicatedReadyStateComponent;
class USimpleReplicationTrigger;
class UStageReadyManager;
class UWorldReadyComponent;

UCLASS(Blueprintable)
class ABreakerGameState : public AGameStateBase, public IAttributeComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHyperLevelSetup* HyperLevelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerGlobalEvents* BreakerGlobalEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerStageManager* StageManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStageReadyManager* StageReadyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPlayerCharacterInfo*> PlayerClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayerCharacterInfo*> AvailableCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> DefaultUnlockedCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurrencyCostMap> CharacterUnlockCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReadyUpComponent* ReadyUpComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldReadyComponent* WorldReadyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleReplicationTrigger* CycleUITriggerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleReplicationTrigger* AbyssUITriggerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplicatedReadyStateComponent* CycleUICompleteComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplicatedReadyStateComponent* AbyssUICompleteComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttributeContainerComponent* AttributeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BossesDefeated, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> BossesDefeated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossesDefeatedUpdated OnBossesDefeatedUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBossFightManager* BossFightManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEncounterManager* EncounterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyGroupTracker* EnemyGroupTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCycleManager* CycleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAssassinManager* AssassinManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDangerMeterComponent* DangerMeterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDaytimeCycleComponent* DaytimeCycleComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeOfDayActorRegistered OnTimeOfDayActorRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHyperLevelSetupSet OnHyperLevelSetupSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTownWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGlobalEvent_AbyssKing* GlobalEvent_AbyssKing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextAbyssKingEventTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextAbyssKingEventDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextAbyssKingEventWarningTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilNextAbyssKingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastAbyssKingEventTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RunExtractionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExtractionBeam* ActivatedRunExtractionBeam;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunExtractionEvent RunExtraction_Started;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunExtractionZoneEnteredEvent RunExtractionZoneEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunExtractionZoneExitedEvent RunExtractionZoneExited;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunExtractionEvent RunExtraction_WaveSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunExtractionEvent RunExtraction_Done;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunTime_Warning_Time;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunTimerEvent RunTime_Warning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunTime_AbyssKingRises_Time;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunTimerEvent RunTime_AbyssKingRises;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunTimerEvent RunTime_TimeIsUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ELastRunEndState LastRunEndState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ELastRunEndState CachedPrevRunEndState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressionEvent OnHubEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressionEventBossDoor OnBossDoorUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeaconInProgressChangedEvent OnBeaconInProgressChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABeacon*> Beacons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABeacon* BeaconInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABeacon* BeaconClosestActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeaconClosestActiveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABeacon* BeaconClosestInactive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeaconClosestInactiveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABeacon* BeaconClosestInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeaconClosestInProgressDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADecker* RegisteredDecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* BiomeInfoProvider;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGearItemDrop> GearItemDropClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> DeathDropClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> BossKeyDropClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugClassLocation> DebugClassLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugEnemySpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> EliteSpawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ChestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ShrineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ExtractionBeamClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PotentialMeteorLocations_Elites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PotentialMeteorLocations_Chests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Shrines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ExtractionBeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CycleCompletedAward_LivesToBrightBloodMultiplication;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurrencyCostMap> BossDoorBaseUnlockCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyCostMap BossDoorPlayerIncreaseUnlockCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DoorsLoadedUnlocked, meta=(AllowPrivateAccess=true))
    TArray<FUnlockedDoor> DoorsLoadedUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULockedDoorComponent*> LockedDoorComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AADA*> RegisteredDDLs;
    
    ABreakerGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateDefeatedBosses();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterDDL(AADA* DDL);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterBiomeInfoProvider(UObject* Provider);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerAbyssKingGlobalEvent_Multicast();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SpawnPing_Multicast(const FName& PingName, FVector Location, bool bAutoDestroy, AActor* RepActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnPing(const FName& PingName, FVector Location, bool bAutoDestroy, AActor* RepActor);
    
    UFUNCTION(BlueprintCallable)
    void SpawnOldDroppedBossKeys();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnDeathDrop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnBossKeyDrop(FVector BossKeyLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetLastRunEndState(ELastRunEndState RunState);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetDangerOnInitWorld();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RunStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RunEnded();
    
    UFUNCTION(BlueprintCallable)
    void ResetCachedPrevRunState();
    
    UFUNCTION(BlueprintCallable)
    void RegisterDDL(AADA* DDL);
    
    UFUNCTION(BlueprintCallable)
    void RegisterBiomeInfoProvider(UObject* Provider);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnPostBeginPlayCallsFinishedLevelStreamedActors();
    
public:
    UFUNCTION(BlueprintCallable)
    void ProcessLastRunState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostPingNotification(const FName& PingName, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DoorsLoadedUnlocked();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BossesDefeated();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyAllPlayersStageReady();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetTransientWorldRank(const int32 NewTransientWorldRank);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_EliteKilled(const FBreakerAttackReport AttackReport);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AllyCausedDamage(const bool bKilled, const FBreakerAttackReport AttackReport);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MC_SetRequiredQuest(const TArray<FQuestInfo>& SyncQuests, FGameplayTag NewlyAcceptedQuestTag);
    
    UFUNCTION(BlueprintCallable)
    void KillAllPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUsingCycleStartLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunTimed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationInsideAbyssKingZone(FVector Loc);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInHub();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeckerComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsCutscenePlaying() const;
    
    UFUNCTION(BlueprintCallable)
    void InitMeteorData();
    
    UFUNCTION(BlueprintCallable)
    void InitializeUnlockedDoors();
    
    UFUNCTION(BlueprintCallable)
    void InitializeUnlockedDDLs();
    
    UFUNCTION(BlueprintCallable)
    void InitializeRunTime(FBreakerRunTimeInfo RunTimeInfo);
    
    UFUNCTION(BlueprintCallable)
    void InitializeExctractionPointsForRun(FVector StartLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRunExtractionOnServer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRevivePlayerOnServer(APlayerState* PlayerToRevive, bool Relocate, FVector RelocationPoint, bool ShrineRevive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalRunSeconds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastAbyssKingEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetSortedDistancePotentialMeteorLocations(const FVector Center);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingRunTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerLocations(TArray<FVector>& Locations);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    APlayerState* GetPlayerByName(const FString& PlayerName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfPlayersInExtractionZone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfDeadPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfAlivePlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalizedDifficultyLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumDifficultyLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExtractionWaveNumberTotal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExtractionWaveNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExtractionWaveKillPointsTotal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExtractionWaveKillPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToClosestPlayer(const FVector Center);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<FGameplayTag> GetDefeatedBossTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADecker* GetDecker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWorldRank();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentDifficultyLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<FGameplayTag> GetBossesInRunTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCurrencyCostMap GetBossDoorUnlockCost(int32 BossDoorNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetBiomeInfoProvider() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABreakerGameState* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerCharacterInfo* FindCharacterInfo(FGameplayTag ClassTag) const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ExtractPlayers_Multicast();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ExtractPlayers(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void DebugInitializeExctractionPoints();
    
    UFUNCTION(BlueprintCallable)
    void DEBUG_SetCachedPrevRunState(ELastRunEndState State);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DDLLoadedUnlocked(AADA* DDL);
    
    UFUNCTION(BlueprintCallable)
    void ClearBeacons();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDistanceToShrines(const FVector TargetLocation, float MinDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDistanceToMeteors(const FVector TargetLocation, float MinDistance, bool OnlyAOE);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDistanceToExtractionBeams(const FVector TargetLocation, float MinDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AwardResourceToPlayerWithRandomizedInfo(const FString& ToPlayer, int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllPlayersDead() const;
    
    UFUNCTION(BlueprintCallable)
    void AddExtractionKillPoints(int32 Points);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool GetAttributeComponent(TScriptInterface<IAttributeContainerInterface>& Result) override PURE_VIRTUAL(GetAttributeComponent, return false;);
    
};

