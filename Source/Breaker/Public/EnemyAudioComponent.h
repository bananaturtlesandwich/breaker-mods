#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "Chaos/ChaosEngineInterface.h"
#include "AudioDamageInterface.h"
#include "AudioDebugInterface.h"
#include "BreakerDamage.h"
#include "BreakerEnemyAudioEventDataContainer.h"
#include "CharacterAudioInterface.h"
#include "CharacterAudioSurfaceInterface.h"
#include "EBeamAttackState.h"
#include "ECharacterBeamAttackSFXType.h"
#include "EnemyAttackNameSFXTags.h"
#include "EnemyAudioComponent.generated.h"

class AActor;
class UAkRtpc;
class UBreakerBeamAttackComponent;
class UBreakerEnemyAudioData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UEnemyAudioComponent : public UActorComponent, public IAudioDamageInterface, public IAudioDebugInterface, public ICharacterAudioInterface, public ICharacterAudioSurfaceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName CurrentAI_AttackName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBreakerEnemyAudioData* AudioData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* VelocityRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEnemyAttackNameSFXTags> AttackSFX_Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterBeamAttackSFXType, FGameplayTag> AttackBeamSFX_Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> CachedFootstepSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeamAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBeamActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSentinel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AudioCombatRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CachedVelocity;
    
public:
    UEnemyAudioComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StopAllEnemyAudio() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSentinelShieldTargetsUpdated_Internal(TArray<AActor*> TargetActors);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSentinelShieldTargetsUpdated(const TArray<AActor*>& ShieldedTargets);
    
    UFUNCTION()
    void OnPlayMontageNotifyEnd_Internal(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayMontageNotifyEnd(FName NotifyName);
    
    UFUNCTION()
    void OnPlayMontageNotifyBegin_Internal(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayMontageNotifyBegin(FName NotifyName);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemySpawned_Internal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemySpawned();
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyRetired_Internal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyRetired();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyDefeated(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyCreated_Internal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyCreated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDepictDamage(const AActor* Attacker, const FBreakerDamage& InDamage, bool bLocallySourcedDamage);
    
    UFUNCTION(BlueprintCallable)
    void OnBeamAttackStateChanged_Internal(UBreakerBeamAttackComponent* BeamComponent, EBeamAttackState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeamAttackStateChanged(UBreakerBeamAttackComponent* BeamComponent, EBeamAttackState State);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceAudioEventContainerWithTag(FGameplayTag GameplayTag, FBreakerEnemyAudioEventDataContainer& AudioEventContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFoleyAudioEventContainerWithTag(FGameplayTag GameplayTag, FBreakerEnemyAudioEventDataContainer& AudioEventContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentAI_AttackName();
    
protected:
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPhysicalSurface> GetCachedFootstepSurface_Implementation();
    
private:
    UFUNCTION(BlueprintCallable)
    static bool GetAudioEventContainerWithTag(const TMap<FGameplayTag, FBreakerEnemyAudioEventDataContainer>& AudioEventMap, FGameplayTag GameplayTag, FBreakerEnemyAudioEventDataContainer& AudioEventContainer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAttackAudioEventContainerWithTag(FGameplayTag GameplayTag, FBreakerEnemyAudioEventDataContainer& AudioEventContainer) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CacheFootstepSurface_Implementation(const TEnumAsByte<EPhysicalSurface> Surface);
    

    // Fix for true pure virtual functions not being implemented
};

