#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EEncounterState.h"
#include "EEncounterType.h"
#include "EncounterInfo.h"
#include "EncounterStateEventDelegate.h"
#include "EncounterManager.generated.h"

class ACMCharBase;

UCLASS(Blueprintable, ClassGroup=Custom, Within=BreakerGameState, meta=(BlueprintSpawnableComponent))
class BREAKER_API UEncounterManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEncounterInfo> Encounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentEncounterID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterStateEvent OnEncounterState_Reset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterStateEvent OnEncounterState_InProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterStateEvent OnEncounterState_Paused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterStateEvent OnEncounterState_Ended_Success;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterStateEvent OnEncounterState_Ended_Failure;
    
    UEncounterManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterEncounter(int32 EncounterID);
    
    UFUNCTION(BlueprintCallable)
    bool SetEncounterState(int32 EncounterID, EEncounterState EncounterState);
    
    UFUNCTION(BlueprintCallable)
    void ResetEncounterManager();
    
    UFUNCTION(BlueprintCallable)
    void RegisterEncounter(EEncounterType EncounterType, ACMCharBase* Enemy, TArray<ACMCharBase*> SupportEnemies, int32& EncounterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEncounterInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEncounterInfo GetCurrentEncounter();
    
};

