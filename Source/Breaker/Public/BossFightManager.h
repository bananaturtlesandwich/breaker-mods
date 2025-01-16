#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BossFightData.h"
#include "BossFightEventDelegate.h"
#include "BossFightManager_OnCutsceneEventDelegate.h"
#include "EBossState.h"
#include "ELevelState.h"
#include "BossFightManager.generated.h"

class AActor;
class ACMCharBase;
class ALevelSequenceActor;
class UDataTable;
class ULevelSequence;

UCLASS(Blueprintable, ClassGroup=Custom, Within=BreakerGameState, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBossFightManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BossFightDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightData BossFightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBossState BossState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACMCharBase* BossEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACMCharBase*> SupportEnemies;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightEvent OnBossFight_Started;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightEvent OnBossFight_Cutscene_Intro;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightEvent OnBossFight_Play_Phase1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightEvent OnBossFight_Cutscene_StateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightEvent OnBossFight_Play_Phase2;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightEvent OnBossFight_Cutscene_Ending;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightEvent OnBossFight_Success;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightEvent OnBossFight_Failure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightEvent OnBossFight_Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightEvent OnBossStateChangedShared;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightManager_OnCutsceneEvent OnCutsceneStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightManager_OnCutsceneEvent OnCutsceneEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentStateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentStateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalBossFightTimer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* IntroCutscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* OutroCutscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> CutsceneAnchor;
    
public:
    UBossFightManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Stop_BossFight();
    
    UFUNCTION(BlueprintCallable)
    bool StartState_Success();
    
    UFUNCTION(BlueprintCallable)
    bool StartState_PlayPhase2();
    
    UFUNCTION(BlueprintCallable)
    bool StartState_PlayPhase1();
    
    UFUNCTION(BlueprintCallable)
    bool StartState_InitialWait();
    
    UFUNCTION(BlueprintCallable)
    bool StartState_Failure();
    
    UFUNCTION(BlueprintCallable)
    bool StartState_CutsceneStateChange();
    
    UFUNCTION(BlueprintCallable)
    bool StartState_CutsceneIntro();
    
    UFUNCTION(BlueprintCallable)
    bool StartState_CutsceneEnding();
    
    UFUNCTION(BlueprintCallable)
    bool Start_BossFight(ELevelState Level);
    
    UFUNCTION(BlueprintCallable)
    void SetRoomAnchor(AActor* RoomAnchor);
    
    UFUNCTION(BlueprintCallable)
    void ResetBossFightManager();
    
    UFUNCTION(BlueprintCallable)
    void RegisterCutscenes(ULevelSequence* Intro, ULevelSequence* Outro);
    
    UFUNCTION(BlueprintCallable)
    void RegisterBossEnemy(ACMCharBase* Boss);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReceiveCutsceneFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    bool NextBossFightState();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayCutscene(ULevelSequence* Cutscene, ACMCharBase* Boss);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastBossStateChanged(EBossState CurrentState, EBossState PrevState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossFightActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllPlayersReady() const;
    
};

