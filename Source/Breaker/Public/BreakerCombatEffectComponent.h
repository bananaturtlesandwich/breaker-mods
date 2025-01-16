#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BreakerCharacterDefeatedListener.h"
#include "BreakerCombatEffectPacket.h"
#include "CombatEffectCreationContext.h"
#include "Templates/SubclassOf.h"
#include "BreakerCombatEffectComponent.generated.h"

class AActor;
class UBreakerCombatEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerCombatEffectComponent : public UActorComponent, public IBreakerCharacterDefeatedListener {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveEffects, meta=(AllowPrivateAccess=true))
    TArray<FBreakerCombatEffectPacket> ActiveEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBreakerCombatEffect*> ActiveEffectInstances;
    
public:
    UBreakerCombatEffectComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdatedEffect(TSubclassOf<UBreakerCombatEffect> EffectType, AActor* Instigator, FCombatEffectCreationContext NewContext);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TriggerSpecialOnTarget_Server(TSubclassOf<UBreakerCombatEffect> EffectType, AActor* Target);
    
public:
    UFUNCTION(BlueprintCallable)
    void TriggerSpecialOnTarget(TSubclassOf<UBreakerCombatEffect> EffectType, AActor* Target);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerActiveEffectSpecial_Multicast(TSubclassOf<UBreakerCombatEffect> EffectType, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveEffects();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveEffect(TSubclassOf<UBreakerCombatEffect> EffectType, AActor* OptionalInstigator) const;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ApplyEffectToTarget_Server(TSubclassOf<UBreakerCombatEffect> EffectType, AActor* Target, FCombatEffectCreationContext CreationContext);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyEffectToTarget(TSubclassOf<UBreakerCombatEffect> EffectType, AActor* Target, FCombatEffectCreationContext CreationContext, bool bLocallyPredicted);
    

    // Fix for true pure virtual functions not being implemented
};

