#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BreakerAttackReport.h"
#include "ELevelState.h"
#include "BreakerMusicManager.generated.h"

class AActor;
class ABreakerPawn;
class ACMCharBase;
class AGameStateBase;
class APawn;
class UBreakerMusicGlobals;
class UBreakerMusicPackage;
class UWorld;

UCLASS(Abstract, Blueprintable)
class BREAKER_API UBreakerMusicManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBreakerMusicGlobals* MusicGlobals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelState CurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelState PreviousLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBreakerMusicPackage* ActiveMusicPackage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActiveMusicGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHandleNewEnteredBiome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBiomeLongFormMusicActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActiveReadyUpEvent;
    
public:
    UBreakerMusicManager();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBiomeMusicPackage(bool EnableHandleNewEnteredBiome, float Delay, bool bForcePlayback);
    
    UFUNCTION(BlueprintCallable)
    void UpdateActiveMusicGameplayTags(FGameplayTagContainer NewGamePlayTags, bool bResetActiveTags);
    
    UFUNCTION(BlueprintCallable)
    bool StopMusicBus();
    
    UFUNCTION(BlueprintCallable)
    void StopActiveMusicPackage(bool bClearCache);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOnPostAbyssMusicState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetLongFormMusicEventTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnableHandleNewEnteredBiome(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void PlaySpectateMusic();
    
    UFUNCTION(BlueprintCallable)
    void PlayMusicPackage(UBreakerMusicPackage* MusicPackage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayLongFormLayerMusicEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerRespawnedDuringRun_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPawnInitialized(ABreakerPawn* BreakerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBossKeyPickedUp(bool bBossDoorOpen);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsLocalPlayerInRangeForLongFormMusic(const UBreakerMusicPackage* MusicPackage) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBiomeLongFormMusicActive() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnReadyUpComponentCancelEvent_Internal();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnReadyUpComponentBeginCountdown_Internal(int32 Countdown);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnReadyUpComponentActivateEvent_Internal(FText StringInfo, int32 IntInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnPlayerPawnExtractionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnPlayerDefeated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnPawnInitialized(ABreakerPawn* BreakerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnNewViewTargetSet(APawn* ViewPawn);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnLongFormMusicSyncExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnLocalPlayerExtracting();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnGameplayWorldReady();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnExtractionWaveSpawned_Internal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnExtractionEventStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnEnemyDefeated(FBreakerAttackReport AttackInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnEliteDefeated(FBreakerAttackReport AttackInfo);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnBossReady_Internal(ACMCharBase* Boss);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnBossDoorUnlock(FGameplayTag Biome);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnBossDefeated(AActor* Boss);
    
    UFUNCTION(BlueprintCallable)
    void HandleNewBiomeEntered_Internal(FGameplayTag OldBiome, FGameplayTag NewBiome);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNewBiomeEntered(FGameplayTag OldBiome, FGameplayTag NewBiome);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleLevelChangeFadeOutEnd(ELevelState NewLevel, ELevelState OldLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleLevelChangeFadeOutBegin(ELevelState NewLevel, ELevelState OldLevel, float FadeLength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleLevelChangeFadeInEnd(ELevelState NewLevel, ELevelState OldLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleLevelChangeFadeInBegin(ELevelState NewLevel, ELevelState OldLevel, float FadeLength);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleGameStateReady(UWorld* World);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetLocalPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGameStateBase* GetGameState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentPawnBiome() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableMusic3D_Positioning(const bool bEnable, const FVector position, const FRotator Rotator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPlay(UWorld* World, AGameStateBase* GameState);
    
};

