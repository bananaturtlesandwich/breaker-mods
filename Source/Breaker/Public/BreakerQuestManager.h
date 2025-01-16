#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "BreakerAttackReport.h"
#include "BreakerPawnComponentInterface.h"
#include "ELevelState.h"
#include "OnQuestTimersUpdatedDelegate.h"
#include "OnQuestUpdatedDelegate.h"
#include "QuestInfo.h"
#include "BreakerQuestManager.generated.h"

class ABreakerPawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerQuestManager : public UActorComponent, public IBreakerPawnComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestTimersUpdated OnQuestTimersUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestUpdated OnRequiredQuestAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestUpdated OnRequiredQuestCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestUpdated OnRequiredQuestExpired;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberAvailableRequiredQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRequiredMissionsIncreasedAtRunCycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberRequiredQuests;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABreakerPawn* OwningPawn;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableQuests;
    
    UBreakerQuestManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(FBreakerAttackReport AttackInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAcceptedAllRequiredQuests();
    
    UFUNCTION(BlueprintCallable)
    void HandleLevelStreamingComplete(const ELevelState NewLevel, const ELevelState OldLevel);
    
    UFUNCTION(BlueprintCallable)
    void HandleCycleIndexChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetCurrentRequiredQuestTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRequiredQuestAttemptsRemainingForQuest(FGameplayTag RequiredQuestTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FQuestInfo> GetAvailableRequiredQuests() const;
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetMaxNumberRequiredQuests(const int32 NewMaxNumberRequiredQuests);
    
    UFUNCTION(BlueprintCallable)
    void AwardRequiredQuestRewards(FGameplayTag RequiredQuestTag, FVector Location);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool AcceptRequiredQuest(FGameplayTag RequiredQuestTag);
    

    // Fix for true pure virtual functions not being implemented
};

