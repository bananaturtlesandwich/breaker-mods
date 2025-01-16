#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AudioDebugInterface.h"
#include "DigestedAudioProperties.h"
#include "BreakerAudioCombatPriorityManager.generated.h"

class APawn;
class UAkRtpc;
class UChoreographyComponent;

UCLASS(Abstract, Blueprintable)
class BREAKER_API ABreakerAudioCombatPriorityManager : public AActor, public IAudioDebugInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> CachedListenerPointOfViewPawn;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UChoreographyComponent>> AudioRelevantCombatants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDigestedAudioProperties> CachedAllCombatantProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDigestedAudioProperties> CachedTopRankedCombatants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* CombatIntensityRTPC;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DebugLoggingOutputPauseDurationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DebugLoggingLastOutputTimeStampSeconds;
    
public:
    ABreakerAudioCombatPriorityManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAudioRelevantCombatants();
    
    UFUNCTION(BlueprintCallable)
    void SortCachedAllCombatantPropertiesByIntermediateScore();
    
    UFUNCTION(BlueprintCallable)
    void SetAudioCombatRank(AActor* Actor, const float NewRank);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioCombatManagerActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void ResetCachedAudioProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdateCombatantAudioPriorities(const float inDeltaSecondsLastUpdate);
    
    UFUNCTION(BlueprintCallable)
    TArray<FDigestedAudioProperties> GetCachedAllCombatantProperties();
    
    UFUNCTION(BlueprintCallable)
    bool GetAudioRelevantCombatantsWithinDistance(UPARAM(Ref) TArray<UChoreographyComponent*>& out_AudioRelevantCombatants, const float distanceThresholdCm, bool bShouldClearOutputArrayPreQuery);
    
    UFUNCTION(BlueprintCallable)
    bool GetAudioCombatantsTargetingPointOfViewPawn(UPARAM(Ref) TArray<UChoreographyComponent*>& out_AudioRelevantCombatants, bool bShouldClearOutputArrayPreQuery);
    
    UFUNCTION(BlueprintCallable)
    bool GetAudioCombatantCachedPropertiesFromChoreographyComp(const UChoreographyComponent* choreographyCompToCheck, UPARAM(Ref) FDigestedAudioProperties& out_CombatantDigestedProperties);
    
    UFUNCTION(BlueprintCallable)
    bool GetAudioCombatantCachedProperties(const AActor* actorToCheck, UPARAM(Ref) FDigestedAudioProperties& out_CombatantDigestedProperties);
    
    UFUNCTION(BlueprintCallable)
    bool GetAllAudioRelevantCombatants(UPARAM(Ref) TArray<UChoreographyComponent*>& out_AudioRelevantCombatants);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void DebugOutputDistanceRelevantAudioCombatants(const TArray<UChoreographyComponent*>& out_AudioRelevantCombatants, const float distanceThresholdCm, bool bShouldClearOutputArrayPreQuery) const;
    
    UFUNCTION(BlueprintCallable)
    FDigestedAudioProperties CreateDefaultCachedCombatantPropertiesEntry(const UChoreographyComponent* inCombatant);
    
    UFUNCTION(BlueprintCallable)
    void CacheListenerPointOfViewPawn(const APawn* NewPointOfViewPawn);
    
    UFUNCTION(BlueprintCallable)
    bool AddDefaultCachedCombatantPropertiesEntry(UPARAM(Ref) FDigestedAudioProperties& cachedCombatantPropertiesToAdd);
    

    // Fix for true pure virtual functions not being implemented
};

