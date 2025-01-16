#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EnemyDetails.h"
#include "EnemyGroupEntry.h"
#include "EnemySpawnManagerInitializedDelegateDelegate.h"
#include "EnemySpawnRegionState.h"
#include "TaggedEnemySpawnRegionStateMap.h"
#include "EnemySpawnManager.generated.h"

class AActor;
class ACMCharBase;
class AEnemyGroupSpawner;
class AEnemySpawnPoint;
class UBreakerStageInfo;
class UEnemySpawnManager;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, Within=BreakerGameModeBase, meta=(BlueprintSpawnableComponent))
class BREAKER_API UEnemySpawnManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnManagerInitializedDelegate OnInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemyKillCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBreakerStageInfo* CurrentStageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnRegionState StageSpawnState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FEnemySpawnRegionState> BiomeSpawnStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FTaggedEnemySpawnRegionStateMap> BiomeZoneSpawnStates;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AEnemyGroupSpawner>> RegisteredSpawnGroups;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AEnemySpawnPoint>> RegisteredSpawnPoints;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint64, int32> MapOfSpawnCompositionUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyGroupEntry> ActiveGroupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveBossHandle;
    
public:
    UEnemySpawnManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterSpawnPoint(AEnemySpawnPoint* SpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterSpawnGroup(AEnemyGroupSpawner* GroupSpawner);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterActiveBoss();
    
    UFUNCTION(BlueprintCallable)
    static void SetEnemyDifficulty(ACMCharBase* Enemy, float DifficultyLevel, bool bReset);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCurrentDayForScaling(int32 NewDayCount, float CurrentTimeOfDay, bool bWriteToScreen);
    
    UFUNCTION(BlueprintCallable)
    static bool ScaleActorAttributesUsingDifficultyInfo(AActor* Actor, float DifficultyLevel);
    
    UFUNCTION(BlueprintCallable)
    static bool ScaleActorAttributesUsForMultiplePlayers(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorHandleFromGroupID(int32 group_id, int32 actor_handle);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSpawnPoint(AEnemySpawnPoint* SpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSpawnGroup(AEnemyGroupSpawner* GroupSpawner);
    
    UFUNCTION(BlueprintCallable)
    void RegisterActiveBoss(ACMCharBase* Boss);
    
    UFUNCTION(BlueprintCallable)
    int32 NumActiveActorsInGroup(int32 group_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UBreakerStageInfo* InStageInfo);
    
    UFUNCTION(BlueprintCallable)
    bool GetRandomEnemyInfo(FGameplayTag BiomeTag, FGameplayTag ZoneTag, FGameplayTagQuery Preference, FEnemyDetails& OutDetails);
    
    UFUNCTION(BlueprintCallable)
    ACMCharBase* GetActiveBoss();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEnemySpawnManager* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void AssignGroupSpawns();
    
    UFUNCTION(BlueprintCallable)
    void AddActorHandleToGroupID(int32 group_id, int32 actor_handle);
    
};

