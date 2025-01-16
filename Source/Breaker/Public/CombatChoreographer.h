#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EAttackChannel.h"
#include "EChoreographerAttackType.h"
#include "OnAttackRequestAcceptedDelegate.h"
#include "OnAttackRequestDeniedDelegate.h"
#include "OnCombatantRegisteredDelegate.h"
#include "OnCombatantUnregisteredDelegate.h"
#include "Templates/SubclassOf.h"
#include "CombatChoreographer.generated.h"

class AActor;
class ACMCharBase;
class UChoreographyComponent;
class UCombatChoreographer;
class UNoisePingComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, Within=BreakerGameModeBase, meta=(BlueprintSpawnableComponent))
class BREAKER_API UCombatChoreographer : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackRateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggroRangeModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockedAttackHurryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceMultiplierForLosingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCombatPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCombatPositionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatPositionSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionHysteresisFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionHysteresisMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallbackDistanceForDeadTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightCoefficientForMinMaxRangePreference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistancePenaltyForBeingTooClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceScorePerMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PenaltyForCrossingTargetsPersonalSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDelayFromHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDelayFromHitMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDelayFromDodge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDelayFromDodgeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDelayFromComboLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDelayFromComboLinkMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackSpeedBonusPerSecondSpentUnhit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAttackSpeedBonusFromRemainingUnhit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BonusTimeForMostAttractiveAttacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackValueForRecency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackValueForPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackValueForDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackChannelGlobalCooldownSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentAttackChannelGlobalCooldownSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMeleeChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRangedChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreviousNumMeleeChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreviousNumRangedChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPreviousCombatChoreographerSetting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackRequestDenied OnAttackRequestDeniedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackRequestAccepted OnAttackRequestAcceptedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCombatantRegistered OnCombatantRegisteredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCombatantUnregistered OnCombatantUnregisteredDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNoisePingComponent> NoisePingComponentArchetype;
    
    UCombatChoreographer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool VerifyAttackRestrictions(ACMCharBase* Enemy, UChoreographyComponent* EnemyChoreographyComp, AActor* Victim, EChoreographerAttackType attackType, EAttackChannel OverrideChannel);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterExclusiveZone(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterCombatant(UChoreographyComponent* bro);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGlobalCooldown(float additivePerAbilitySeconds, float multiplicativePerAbilitySeconds);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 RemoveFromChannel(const EChoreographerAttackType inAttackType, const int32 numToRemove);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAttack(ACMCharBase* Enemy);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSuccessfulMeleeStrike(AActor* Attacker);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterSuccessfulHitOnVictim(AActor* Victim);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterSuccessfulDodge(AActor* Attacker);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterSuccessfulComboLink(AActor* Attacker);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterExclusiveZone(FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCombatant(UChoreographyComponent* bro);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterAttack(ACMCharBase* Enemy, AActor* Victim, EChoreographerAttackType attackType, float IntendedLength, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void OnADAWithNavModifierComponentRegister(AActor* InHypderFabActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void InitializeAttackChannels(const UChoreographyComponent* combatantToUpdate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool HasLineOfSightResultBP(UChoreographyComponent* Source, UChoreographyComponent* Target, UPARAM(Ref) bool& OutLOSValid);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetNearbyCombatPositions(const FVector& Center, float Radius);
    
    UFUNCTION(BlueprintCallable)
    TArray<UChoreographyComponent*> GetNearbyCombatants(const FVector& Center, float Radius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    float GetCurrentGlobalCooldown() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UChoreographyComponent*> GetAllCombatants();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UCombatChoreographer* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ClogAllChannels(AActor* Victim, float DownTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAttack(ACMCharBase* Enemy, AActor* Victim, EChoreographerAttackType attackType, float RequiredDownTime, int32 Priority, EAttackChannel OverrideChannel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 AddToChannel(const EChoreographerAttackType inAttackType, const int32 numToAdd);
    
};

