#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "CycleData.h"
#include "EGlobalEvent_AbyssKingState.h"
#include "EHUDState.h"
#include "ELevelState.h"
#include "ListenerPointOfViewPawnChangedEventDelegate.h"
#include "BreakerAudioGameplayManager.generated.h"

class AActor;
class ABreakerAudioCombatPriorityManager;
class ABreakerOceanShorePlayer;
class ABreakerPawn;
class ABreakerPlayerController;
class AHyperLevelSetup;
class AMultiPositionAmbientAudioPlayer;
class APawn;
class UBreakerAudioGlobals;

UCLASS(Abstract, Blueprintable)
class BREAKER_API UBreakerAudioGameplayManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FListenerPointOfViewPawnChangedEvent ListenerPointOfViewPawnChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> ListenerPointOfViewPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelState CurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelState PreviousLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBreakerAudioGlobals* AudioGlobals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABreakerAudioCombatPriorityManager* BreakerAudioCombatPriorityManagerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMultiPositionAmbientAudioPlayer* MultiPositionAmbientAudioPlayerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABreakerOceanShorePlayer* BreakerOceanShorePlayerInstance;
    
public:
    UBreakerAudioGameplayManager();

private:
    UFUNCTION(BlueprintCallable)
    void SetupOnWorldReadyEventBindings();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentLevelAK_State(ELevelState Level);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerRespawnedDuringRun_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPawnInitialized(ABreakerPawn* BreakerPawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameStateReady();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayAbyssKingScreen(ABreakerPlayerController* BreakerPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDangerEventSoonTriggered(int32 Notification);
    
    UFUNCTION(BlueprintCallable)
    void OnCycleUpdated_Internal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCycleUpdated(bool bSuccess, FCycleData CycleData, int32 CycleLives);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCycleUIComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBossesDefeatedUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnTimeOfDayPhaseUpdated(FName TimeOfDay);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnTimeOfDayActorRegistered(AActor* TimeOfDayActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOnPlayerPawnExtractionStarted();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnPlayerDefeated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnPawnInitialized(ABreakerPawn* BreakerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnNewViewTargetSet(APawn* ViewPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnHyperLevelSetup(AHyperLevelSetup* HyperLevelSetup);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnHUD_StateChange(EHUDState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnExtractionZoneExited();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnExtractionZoneEntered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnExtractionEventStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnCutsceneStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnCutsceneBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnAbyssKingEvent(EGlobalEvent_AbyssKingState AbyssKingState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNewBiomeEntered(FGameplayTag OldBiome, FGameplayTag NewBiome);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleLocalPlayerTeleportSucceeded();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleLocalPlayerStartedExtracting();
    
    UFUNCTION(BlueprintCallable)
    void HandleLevelChangeFadeOutEnd_Internal(ELevelState NewLevel, ELevelState OldLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleLevelChangeFadeOutEnd(ELevelState NewLevel, ELevelState OldLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleLevelChangeFadeOutBegin(ELevelState NewLevel, ELevelState OldLevel, float FadeLength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleLevelChangeFadeInEnd(ELevelState NewLevel, ELevelState OldLevel);
    
    UFUNCTION(BlueprintCallable)
    void HandleLevelChangeFadeInBegin_Internal(ELevelState NewLevel, ELevelState OldLevel, float FadeLength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleLevelChangeFadeInBegin(ELevelState NewLevel, ELevelState OldLevel, float FadeLength);
    
    UFUNCTION(BlueprintCallable)
    void HandleDrownStartedLocalPlayer_Internal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDrownStartedLocalPlayer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetListenerPointOfViewPawn(APawn*& PointOfViewPawn) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentPawnBiome() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBreakerAudioGlobals* GetAudioGlobals() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerAudioCombatPriorityManager* GetAudioCombatPriorityManager() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPlay();
    
};

