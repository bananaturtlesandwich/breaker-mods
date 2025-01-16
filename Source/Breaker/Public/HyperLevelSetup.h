#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELevelChangeStatus.h"
#include "ELevelState.h"
#include "HyperLevelChangeEventDelegate.h"
#include "HyperLevelFadeBeginEventDelegate.h"
#include "HyperLevelGenericEventDelegate.h"
#include "TestMonkeyReflectableInterface.h"
#include "HyperLevelSetup.generated.h"

class ULevelStreaming;

UCLASS(Blueprintable)
class BREAKER_API AHyperLevelSetup : public AActor, public ITestMonkeyReflectableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHyperLevelChangeEvent LevelChangeInitiated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHyperLevelFadeBeginEvent LevelChangeFadeOutBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHyperLevelChangeEvent LevelChangeFadeOutEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHyperLevelGenericEvent LevelUnready;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHyperLevelChangeEvent LevelStreamingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHyperLevelChangeEvent LevelStreamingCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHyperLevelChangeEvent LevelPostLoadDelayComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHyperLevelFadeBeginEvent LevelChangeFadeInBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHyperLevelChangeEvent LevelChangeFadeInEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHyperLevelChangeEvent LevelChangeCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HubFromUninitializedFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HubFromUninitializedExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitHubToShopFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitHubToShopDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitShopFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitShopDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnterShopDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnterShopFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitHubFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitHubDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnterHubDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnterHubFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitProcgenFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitProcgenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnterProcgenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnterProcgenFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeFadeInAfterWorldReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Hub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HubShops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Pangaea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BossRooms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BossRoomLighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BossRoomAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Abyss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TrainingArena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> HubStreamingLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> HubShopStreamingLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> PangaeaStreamingLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> BossRoomStreamingLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> BossRoomLightingStreamingLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> BossRoomAudioStreamingLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> AbyssStreamingLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> TrainingArenaLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturningFromRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelState PreviousState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> AllLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TargetLevelState, meta=(AllowPrivateAccess=true))
    ELevelState RepTargetLevelState;
    
public:
    AHyperLevelSetup(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void WorldReadyToFadeIn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool StateIsShop(ELevelState CheckState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool StateIsRun(ELevelState CheckState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool StateIsBoss(ELevelState CheckState) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void RetryChangeLevel(ELevelState NewLevelState, bool bIsFromServer);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetLevelState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLevelStreamingStarted(ELevelState NewLevel, ELevelState OldLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLevelStreamingCompleted(ELevelState NewLevel, ELevelState OldLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLevelPostLoadDelayComplete(ELevelState NewLevel, ELevelState OldLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLevelChangeInitiated(ELevelState NewLevel, ELevelState OldLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLevelChangeFadeOutEnd(ELevelState NewLevel, ELevelState OldLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLevelChangeFadeOutBegin(ELevelState NewLevel, ELevelState OldLevel, float FadeLength);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLevelChangeFadeInEnd(ELevelState NewLevel, ELevelState OldLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLevelChangeFadeInBegin(ELevelState NewLevel, ELevelState OldLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLevelChangeCompleted(ELevelState NewLevel, ELevelState OldLevel);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_InitiateLevelChange(ELevelState NewLevelState);
    
private:
    UFUNCTION(BlueprintCallable)
    void LevelWaitForStageReadyDelay();
    
    UFUNCTION(BlueprintCallable)
    void LevelTransitionDelay(ELevelState NewLevelState, bool bIsFromServer);
    
    UFUNCTION(BlueprintCallable)
    void LevelTransition(ELevelState NewLevelState, bool bIsFromServer);
    
    UFUNCTION(BlueprintCallable)
    void LevelStreamingCompleteDelay();
    
    UFUNCTION(BlueprintCallable)
    void LevelPostLoadDelay();
    
    UFUNCTION(BlueprintCallable)
    void LevelFadeInDelay();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelStreamingInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelChangeInProgress() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleLevelStreamingStateChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELevelChangeStatus GetLevelChangeStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsLevelTransitionHappening();
    
private:
    UFUNCTION(BlueprintCallable)
    bool ChangeState(ELevelState NewLevelState, bool bIsFromServer);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ChangeLevel(ELevelState NewLevelState, bool bIsFromServer);
    

    // Fix for true pure virtual functions not being implemented
};

