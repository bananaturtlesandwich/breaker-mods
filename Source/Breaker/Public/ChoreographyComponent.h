#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AIAdvantage.h"
#include "AICombatAttackData.h"
#include "AICombatPriorityData.h"
#include "AILastRestrictionPrevention.h"
#include "EAIAbilityRestriction.h"
#include "EAttackChannel.h"
#include "EChoreographerAttackType.h"
#include "LogicSuspendKeyPair.h"
#include "OnChoreographyAgentLogicStatusChangedDelegate.h"
#include "OnTargetChangedDelegateDelegate.h"
#include "RecentAttackResult.h"
#include "ChoreographyComponent.generated.h"

class AADA;
class AActor;
class ABreakerGameModeBase;
class ACMCharBase;
class UAIPerceptionComponent;
class UBlackboardComponent;
class UBlackboardData;
class UChoreographyComponent;
class UHLB_AIPerceptionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UChoreographyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAlly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeashRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomeZoneLeashingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWanderRangeCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastAggroLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustAnchorPointToAggroLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EAttackChannel ActiveAttackChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentCombatPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAICombatPriorityData CombatPriorityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAICombatAttackData> CombatAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAICombatAttackData> OriginalCombatAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HintPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HintRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HintScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsChoreographedPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PositioningPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> RecentDamager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector CombatPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasLineOfSightToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 PositionRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAspiringAttackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetProximityPathRequestThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ExclusionZone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChoreographyAgentLogicStatusChanged OnAgentLogicStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetChangedDelegate OnTargetChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAILastRestrictionPrevention LastRestrictionFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveAdvantageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastActiveAvantageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PenaltyForCrossingPlayerTargetPersonalSpaceOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAllowedPositionSwappingForPositionAssignments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float AggroRangeCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPropogateInitialChoreographerDataOnBlackboardInitFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanStrafeXYHorizontalPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanStrafeXYVerticalPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatPositionSpacingCustomCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLeashing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsUsingAdvantage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAssassin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpawnedMinion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSpawnedMinionRetiredToPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SuspendState, meta=(AllowPrivateAccess=true))
    TArray<FLogicSuspendKeyPair> LogicSuspendReasons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRecentAttackResult> RecentAttackHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalSuspends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIAdvantage> AISupportedAdvantages;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AADA>> DiscoveredAIAdvantageAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHLB_AIPerceptionComponent> OwnerAIPerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAICombatAttackData InvalidCombatAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateBlackboardPostInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AudioRawPriorityValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugOwnerIsInternallySuspended;
    
public:
    UChoreographyComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdateWanderRangeDataForBlackboard(const UBlackboardComponent* BlackboardComp);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdateWanderLocationDataForBlackboard(const UBlackboardComponent* BlackboardComp, const FVector wanderLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdatePointOfInterestLocationForBlackboard(const UBlackboardComponent* BlackboardComp, const FVector poiLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdatePointOfInterestActorForBlackboard(const UBlackboardComponent* BlackboardComp, const AActor* poiActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdateNoiseHeardSourceLocationForBlackboard(const UBlackboardComponent* BlackboardComp, const FVector noiseHeardWorldLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdateNoiseHeardSourceActorForBlackboard(const UBlackboardComponent* BlackboardComp, const AActor* noiseSourceActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdateNoiseHeardSelfLocationForBlackboard(const UBlackboardComponent* BlackboardComp, const FVector selfLocationDuringNoiseDetection);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdateNoiseCheckAlertedLocation(const UBlackboardComponent* BlackboardComp, const FVector alertNoiseWorldLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdateLeashRangeDataForBlackboard(const UBlackboardComponent* BlackboardComp);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdateLeashAnchorPointDataForBlackboard(const UBlackboardComponent* BlackboardComp, const FVector updatedLeashWorldLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdateLastAggroLocationDataForBlackboard(const UBlackboardComponent* BlackboardComp, const FVector updatedAggroLocation, bool bUpdateLeashAnchorPointWithAggroLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdateFocusTargetDataForBlackboard(const UBlackboardComponent* BlackboardComp);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdateFocusTargetData();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdateAIChoreographerDataForBlackboardWithAttackChannel(const EAttackChannel attackChannel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdateAIChoreographerDataForBlackboard();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdateAdvantageDataForBlackboard(const UBlackboardComponent* BlackboardComp);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdateAbilityTypeRestrictionMetaData(UPARAM(Ref) float& out_MinDistanceCm, UPARAM(Ref) float& out_MaxdistanceCm, float minDistancePaddingCoefficientCm, float maxDistanceCoefficientCm);
    
    UFUNCTION(BlueprintCallable)
    void Unregister();
    
    UFUNCTION(BlueprintCallable)
    bool TrySuspendLogic(const FString& reasonPaperTrail);
    
    UFUNCTION(BlueprintCallable)
    bool TryResumeLogic(const FString& reasonPaperTrail);
    
    UFUNCTION(BlueprintCallable)
    void SynchronizeSuspendStates();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTargetActor(const AActor* nextTarget, bool bUpdateBlackboard);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsUsingAdvantageStatus(const bool bInUsingAdvantageStatus, const int32 inAdvantageIndex, bool bUpdateBlackboard);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsLeashingStatus(const bool bIsLeashingStatus, bool bUpdateBlackboard);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentRawAudioPriorityValue(const int32 InNewValue);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RevertHolobyteCooldownModifications();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void Register();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdateAbilityRestrictions(const float deltaTimeSeconds);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnTargetActorChanged(AActor* nextTarget, AActor* previousTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnRetiredToPool(UAIPerceptionComponent* perceptionComp, UBlackboardComponent* BlackboardComp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnInitFromPool(ACMCharBase* ownerCMChar);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnAdvantageStart(AADA* advantageHyperFab, const int32 advantageIndex, FAIAdvantage& inAdvantage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnAdvantageMatchDiscovered(AADA* inAdvantageMatchedADA, const FAIAdvantage& inMatchingAdvantage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnAdvantageEnd(const int32 previousActiveIndex, FAIAdvantage& advantageEnding);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInitBlackboardData(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnTargetActorChanged(const AActor* nextTarget, const AActor* previousTarget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SuspendState();
    
    UFUNCTION(BlueprintCallable)
    void OnAttackRequestDenied(UChoreographyComponent* choreographerCompDenied, EAttackChannel attackChannel, EChoreographerAttackType attackType, float serverTimeSeconds);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackRequestAccepted(UChoreographyComponent* choreographerCompDenied, EAttackChannel attackChannel, EChoreographerAttackType attackType, float serverTimeSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAdvantageStart(const AADA* advantageHyperFab, const int32 advantageIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnAdvantageEnd(const int32 previousActiveIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnADAAIAdvantageUpdated(AActor* inActorUpdated, FAIStimulus inStimulus);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsUsingAdvantage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLogicSuspended(bool bIgnoreTrackedSuspends) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeashingAllowed() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsLeashing() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsCustomCombatSpacingInUse() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsAttackDataValid(const FAICombatAttackData& attackData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllowedPositionSwappingForPositionAssignments() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsAlertToNoise() const;
    
    UFUNCTION(BlueprintCallable)
    void InitAtLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDiscoveredAvantageArea(const AADA* inPotentialAdvantageMatchedADA) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasCombatAbilityRestrictions(const FAICombatAttackData& combatAbilityData) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasAnyAbilityRestrictions() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasAbilityTypeCleanShotRestriction(const EChoreographerAttackType inAbilityAttackType, bool bHasMeleeRestriction, bool bHasRangedRestriction) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 HasAbilityRestrictionFlagsForType(const EAIAbilityRestriction inAbilityRestrictionCheck, const EChoreographerAttackType inAbilityAttackType) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FBlackboardKeySelector GetWanderMaxRangeSelector() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FBlackboardKeySelector GetWanderAnchorPointSelector() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetMostRecentAttackData(FRecentAttackResult& out_RecentAttackData) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FBlackboardKeySelector GetLeashRangeSelector() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FBlackboardKeySelector GetLeashAnchorPointSelector() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FBlackboardKeySelector GetLastAggroLocationSelector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHomeZoneLeashingRadius() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FAICombatAttackData GetDefaultAttackCombatData();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    float GetCustomCombatSpacing() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetCurrenRawAudioSystemPriorityValue();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    float GetCombatPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanStrafeXYVerticalPlane() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanStrafeXYHorizontalPlane() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    ABreakerGameModeBase* GetBreakerGameModeBase();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FAICombatAttackData GetAttackDataForChannel(const EAttackChannel attackChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAggroRange() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FAICombatAttackData GetActiveAttackCombatData();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    EAIAbilityRestriction GetAbilityRestrictionFlagsForAbility(const EAttackChannel inAttackChannel) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* FindAssassinTarget(ACMCharBase* inAssassinBaseCMChar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoAnyAttacksRequireLOS() const;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void DebugDrawAIWandering(const float DeltaSeconds) const;
    
    UFUNCTION(BlueprintCallable)
    void DebugCheckInternalSuspendState();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearLogicSuspends();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearBlackboardCachedNoiseStimuliData();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CacheSpawnLocationToBlackboard();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CacheAILastRestrictionPrevention(const EAttackChannel inAttackSlot, const EChoreographerAttackType inTypeRestriction, const EAIAbilityRestriction inLastFailureFlags, const float inAngleFailureResult, const AActor* inTarget, const float inServerTimeSeconds, const float inMaxServerSecondsDifForUsage, const bool bInFailedVerticality);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyHolobyteCooldownModifications(const float CooldownModification);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddRecentAttackData(FRecentAttackResult& recentAttackData);
    
};

