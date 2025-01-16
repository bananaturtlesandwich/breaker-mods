#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "BreakerPawnComponentInterface.h"
#include "ETutorialTrigger.h"
#include "OnTutorialTriggerEventDelegate.h"
#include "TutorialDetails.h"
#include "TutorialTags.h"
#include "TutorialManager.generated.h"

class ABreakerPawn;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UTutorialManager : public UActorComponent, public IBreakerPawnComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTutorialTriggerEvent OnTutorialTrigger;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETutorialTrigger, FTutorialTags> TutorialTriggerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TutorialTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABreakerPawn* OwningPawn;
    
public:
    UTutorialManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TriggerTutorial(const ETutorialTrigger TutorialTrigger) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ResetTutorials() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void MarkTutorialTagsSeen(const TArray<FGameplayTag> TutorialTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidTutorialTag(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTutorialDetails GetTutorialDetails(const FGameplayTag& TutorialTag) const;
    

    // Fix for true pure virtual functions not being implemented
};

