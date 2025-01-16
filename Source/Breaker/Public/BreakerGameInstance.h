#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ActorPoolEntry.h"
#include "BreakerPawnFinishMovementCollisionDelegate.h"
#include "BreakerPawnStartMovementCollisionDelegate.h"
#include "CurrencyCostMap.h"
#include "DebugPoolInfo.h"
#include "ECycleStatus.h"
#include "EMapActorState.h"
#include "OnlineGameInstance.h"
#include "POIProcessedDisplayData.h"
#include "PlayerCharacterDetails.h"
#include "Preferences.h"
#include "SaveSlotMapper.h"
#include "StatusEffectSpawnability.h"
#include "SynergyModRequirements.h"
#include "Templates/SubclassOf.h"
#include "UnlockedDoor.h"
#include "BreakerGameInstance.generated.h"

class AActor;
class APawn;
class UBreakerGameInstance;
class UDataTable;
class UGearVariablesDataAsset;
class UObject;
class UPlayerCharacterInfo;
class UPlayerDetailsObject;
class UVendorAffinityDataAsset;
class UWorldSaveComponent;

UCLASS(Blueprintable, NonTransient)
class BREAKER_API UBreakerGameInstance : public UOnlineGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldSaveComponent* WorldSaveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisconnectOccured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveSlotMapper SaveSlotMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerDetailsObject* LocalPlayerDetailsObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVendorAffinityDataAsset* VendorDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGearVariablesDataAsset* GearVariablesDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyCostMap EndOfCycleTaxPercents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfStarterHealthKits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfHealthKits;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCharacterDetails LocalPlayerDetails;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WorldRankLevels;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatusEffectSpawnability> StatusEffectSpawnability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSynergyModRequirements> SynergyModRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterInfo* BreakerSkinDetailsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurrencyCostMap> AbilitySectionUnlockCosts;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerPawnStartMovementCollision OnMovementStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerPawnFinishMovementCollision OnMovementFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString P4ChangelistNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString P4Branch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfAbilityEquipSlots_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurrencyCostMap> AbilityEquipSlotCosts;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AbilityUIDataTable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SpawnPoolDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPooledClassesToSpawnPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPooledInstancesToSpawnPerFrame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, FActorPoolEntry> ActorPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, FActorPoolEntry> PooledActorsInFlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DebugPooledActorsInFlight;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint64, int32> MapActorsToHandles;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, TWeakObjectPtr<AActor>> MapHandlesToActors;
    
public:
    UBreakerGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<FGameplayTag> UI_GetAbilitiesForTree(const int32 SectionNumber, const bool bLeft) const;
    
    UFUNCTION(BlueprintCallable)
    void TriggerPerClassCooldown(FName Cooldown, UClass* ObjectClass, float Time);
    
    UFUNCTION(BlueprintCallable)
    void TriggerPerActorCooldown(FName Cooldown, AActor* Actor, float Time);
    
    UFUNCTION(BlueprintCallable)
    void TriggerCooldown(FName Cooldown, float Time);
    
    UFUNCTION(BlueprintCallable)
    void TossAllActorsOfClassInPool(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    void TossActorInPool(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopGameplayRecording(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartGameplayRecording(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldSeedVariant(int32 NewSeed, int32 NewVariant);
    
    UFUNCTION(BlueprintCallable)
    static void SetNumberOfCompletedMissionsForHostMigration(int32 Defeated);
    
    UFUNCTION(BlueprintCallable)
    static void SetLastSafeWorldLocation(FVector NewSafeLocation);
    
    UFUNCTION(BlueprintCallable)
    static void SetLastDefeatedBossForHostMigration(FGameplayTag Biome);
    
    UFUNCTION(BlueprintCallable)
    static void SetDefeatedBossesForHostMigration(TArray<FGameplayTag> Biomes);
    
    UFUNCTION(BlueprintCallable)
    static void SetDangerForHostMigration(int32 DangerMeter, int32 DangerDifficulty);
    
    UFUNCTION(BlueprintCallable)
    static void SetCycleStateForHostMigration(ECycleStatus Status);
    
    UFUNCTION(BlueprintCallable)
    static void SetCycleRunsForHostMigration(int32 Runs);
    
    UFUNCTION(BlueprintCallable)
    static void SetCycleLivesForHostMigration(int32 Lives);
    
    UFUNCTION(BlueprintCallable)
    static void SetCycleHealthKitsForHostMigration(int32 Kits);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSavedPOIData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ResetLocalPlayerDetails();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveBossKeyDrop(FVector Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayGameplayRecording(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 NumActiveActorsForPooledClass(TSubclassOf<AActor> ActorClass);
    
private:
    UFUNCTION(BlueprintCallable)
    static void IsStatsSession(bool& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelStreamingComplete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLastSafeWorldLocationSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHostMigrationSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameWindowInFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDoingHostMigration();
    
    UFUNCTION(BlueprintCallable)
    bool IsActorClassInPool(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    void InitPooling();
    
    UFUNCTION(BlueprintCallable)
    static void IncrementNumTimesWorldUsed();
    
    UFUNCTION(BlueprintCallable, Exec)
    void hlb_UseSavedWorld();
    
    UFUNCTION(BlueprintCallable, Exec)
    void hlb_UpdateGrassCullDistance(float NewCullDistance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void hlb_TriggerDecking();
    
    UFUNCTION(BlueprintCallable, Exec)
    void hlb_ResetDeckingOverrides();
    
    UFUNCTION(BlueprintCallable, Exec)
    void hlb_ForceSaveLocalWorld();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetWorldSeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWorldSaveComponent* GetWorldSaveComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TMap<int32, EMapActorState> GetWorldActorStates();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FUnlockedDoor> GetUnlockedDoorsForHostMigration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetUnlockedDDLsForHostMigration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSectionNumberForAbility(const FGameplayTag& AbilityTag) const;
    
    UFUNCTION(BlueprintCallable)
    static void GetSavedPOIData(TArray<FPOIProcessedDisplayData>& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FPreferences GetPreferences() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfPooledEnemiesInFlight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfPooledEnemies();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumberOfCompletedMissionsForHostMigration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfAbilitySections() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPlayerDetailsObject* GetLocalPlayerDetailsObject(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetLastSafeWorldLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetLastDefeatedBossForHostMigration();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetHashFromString(const FString& StringIn);
    
    UFUNCTION(BlueprintCallable)
    static TMap<int32, bool> GetEnemyAliveStates();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGameplayTag> GetDefeatedBossesForHostMigration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDebugPoolInfo(TArray<FDebugPoolInfo>& PooledInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDangerMeterForHostMigration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDangerDifficultyForHostMigration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ECycleStatus GetCycleStateForHostMigration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCycleRunsForHostMigration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCycleLivesForHostMigration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCycleHealthKitsForHostMigration();
    
    UFUNCTION(BlueprintCallable)
    int32 GetActorHandle(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetActorFromPoolDeferred(TSubclassOf<AActor> ActorClass, FTransform SpawnTransform, AActor* Owner, APawn* Instigator);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetActorFromPool(TSubclassOf<AActor> ActorClass, FTransform SpawnTransform, AActor* Owner, APawn* Instigator);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetActorByHandle(int32 Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCurrencyCostMap GetAbilitySectionUnlockCost(const int32 SectionNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UBreakerGameInstance* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ForceWriteSave(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawEnemiesInFlight();
    
    UFUNCTION(BlueprintCallable)
    static void CompleteHostMigration();
    
    UFUNCTION(BlueprintCallable)
    void ClearPooling();
    
    UFUNCTION(BlueprintCallable)
    static void ClearDefeatedBossesForHostMigration();
    
    UFUNCTION(BlueprintCallable)
    bool CheckPerClassCooldown(FName Cooldown, UClass* ObjectClass, float RequiredDownTime);
    
    UFUNCTION(BlueprintCallable)
    bool CheckPerActorCooldown(FName Cooldown, AActor* Actor, float RequiredDownTime);
    
    UFUNCTION(BlueprintCallable)
    bool CheckCooldown(FName Cooldown, float RequiredDownTime);
    
    UFUNCTION(BlueprintCallable)
    static void AddUnlockedDoorForHostMigration(int32 WorldID, FName ComponentTag);
    
    UFUNCTION(BlueprintCallable)
    static void AddUnlockedDDLForHostMigration(int32 WorldID);
    
    UFUNCTION(BlueprintCallable)
    static void AddSavedPOIData(FPOIProcessedDisplayData InData);
    
    UFUNCTION(BlueprintCallable)
    static void AddDefeatedBossForHostMigration(FGameplayTag Biome);
    
    UFUNCTION(BlueprintCallable)
    static void AddBossKeyDrop(FVector Location);
    
};

