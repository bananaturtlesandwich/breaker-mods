#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AttributeContainerComponent.h"
#include "EStatusEffectType.h"
#include "StatusEffectContainerInterface.h"
#include "StatusEffectObjectChangedDelegateDelegate.h"
#include "CharacterAttributeComponent.generated.h"

class IAttributeContainerInterface;
class UAttributeContainerInterface;
class UDataAsset;
class UStatusEffectBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HMMAGIC_API UCharacterAttributeComponent : public UAttributeContainerComponent, public IStatusEffectContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* EffectMappingContext;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatusEffectObjectChangedDelegate EventOnStatusEffectApplied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatusEffectObjectChangedDelegate EventOnStackSizeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatusEffectObjectChangedDelegate EventOnStatusEffectRemoved;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStatusEffectBase*> RemovedEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UStatusEffectBase*> StatusEffectContainer;
    
public:
    UCharacterAttributeComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_RemoveStatusEffect(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_RemoveAllStatusEffects();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_ApplyStatusEffect_ToTarget(FGameplayTag Tag, EStatusEffectType EffectType, int32 EffectLevel, UAttributeContainerComponent* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_ApplyStatusEffect(FGameplayTag Tag, EStatusEffectType EffectType, int32 EffectLevel, UAttributeContainerComponent* Instigator);
    
public:
    UFUNCTION(BlueprintCallable)
    bool RemoveStatusEffect(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllStatusEffects();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MULTICAST_RemoveStatusEffect(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MULTICAST_RemoveAllStatusEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MULTICAST_ApplyStatusEffect(FGameplayTag Tag, EStatusEffectType EffectType, int32 EffectLevel, UAttributeContainerComponent* Instigator);
    
public:
    UFUNCTION(BlueprintCallable)
    bool HasStatusEffectApplied(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    bool GetStackCount(FGameplayTag Tag, int32& StackSize);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyStatusEffect(FGameplayTag Tag, EStatusEffectType EffectType, int32 EffectLevel, TScriptInterface<IAttributeContainerInterface> Instigator);
    

    // Fix for true pure virtual functions not being implemented
};

