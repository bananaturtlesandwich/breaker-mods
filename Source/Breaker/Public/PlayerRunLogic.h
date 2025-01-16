#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "BreakerAttackReport.h"
#include "BreakerPawnComponentInterface.h"
#include "ELevelState.h"
#include "LocalPlayerStartedExtractingDelegate.h"
#include "PlayerRunLogic.generated.h"

class AActor;
class ABossDoor;
class ABreakerPawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UPlayerRunLogic : public UActorComponent, public IBreakerPawnComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentOfBrightBloodToDropOnDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalPlayerStartedExtracting LocalPlayerStartedExtracting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TeleportInMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExtractionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InsideExtractionZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtractionZoneMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtractionZoneFillRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtractionZoneDrainRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafeSpaceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageTimeUntilSafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbyssKingAOEReviveInvincibilityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbyssKingAOEdamageReceivedModification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PlayerInsideAbyssKingAOEs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DangerZoneHealthDrainMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DangerZoneHealthDrainFillRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DangerZoneHealthDrainDrainRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DangerZoneHealthDamage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OverrideDeathDropSpawnLocation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABreakerPawn* OwningPawn;
    
public:
    UPlayerRunLogic(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TryDamageBeaconEvent_Server(int32 DamageAmount);
    
    UFUNCTION(BlueprintCallable)
    void TryApplyHostMigrationData(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void StopExtractionMode();
    
    UFUNCTION(BlueprintCallable)
    void StartPlayerPawnExtraction();
    
    UFUNCTION(BlueprintCallable)
    void SetLastSafePlace();
    
    UFUNCTION(BlueprintCallable)
    void SetFellInHoleSafeSpot(FTransform NewTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetDeathDropSpawnLocationOverride(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetCombatantsNearby(bool bHasNearby);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void PlayerExtracting_Server();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayerExtracting_Multicast();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void PlayerExtracted_Server();
    
    UFUNCTION(BlueprintCallable)
    bool PlayerExitsExtractionZone(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerExitsAbyssKingAOE(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerEnterExtractionZone(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerEnterAbyssKingAOE(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStageUnready();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStageReady();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerRevived();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerPawnExtractionStarted();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerDefeated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnteredBossDoor(ABossDoor* BossDoor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(FBreakerAttackReport AttackInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideExtractionZone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideAbyssKingAOE();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InTownMode() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleLevelStreamingComplete(const ELevelState NewLevel, const ELevelState OldLevel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOverrideDeathDropSpawnLocation() const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void GetNearbyCombatants();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFellInHoleSafeSpot() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FellInHole();
    
public:
    UFUNCTION(BlueprintCallable)
    void FallInHole();
    
    UFUNCTION(BlueprintCallable)
    void ClearDeathDropSpawnLocationOverride();
    
    UFUNCTION(BlueprintCallable)
    void ApplyEquippedAbilities(FGameplayTag AbilityTag, int32 AbilityLevel);
    

    // Fix for true pure virtual functions not being implemented
};

