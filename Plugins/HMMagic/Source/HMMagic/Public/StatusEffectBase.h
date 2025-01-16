#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "AttributeModifier.h"
#include "EStatusEffectStackingType.h"
#include "EStatusEffectType.h"
#include "StatusEffectStackItemDetails.h"
#include "StatusEffectBase.generated.h"

class IAttributeContainerInterface;
class UAttributeContainerInterface;

UCLASS(Abstract, Blueprintable)
class HMMAGIC_API UStatusEffectBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatusEffectStackItemDetails> Stack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatusEffectStackItemDetails> PendingAddedStackItemDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatusEffectStackItemDetails> PendingRemovedStackItemDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IAttributeContainerInterface> TargetAttributeComponent;
    
public:
    UStatusEffectBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_TriggerIntervalEvent(const int32& EffectLevel, const int32& Count, const TArray<FAttributeModifier>& AttributeModifierCollection, const TScriptInterface<IAttributeContainerInterface>& Instigator, const TScriptInterface<IAttributeContainerInterface>& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Shutdown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_OnStatusEffectStackRemoved(const int32& Count, const FStatusEffectStackItemDetails& StackItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_OnStatusEffectStackAdded(const int32& Count, const FStatusEffectStackItemDetails& StackItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_InitializeEvent(const int32& EffectLevel, const TArray<FAttributeModifier>& AttributeModifierCollection, const TScriptInterface<IAttributeContainerInterface>& Instigator, const TScriptInterface<IAttributeContainerInterface>& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float K2_GetDurationPercentage(const int32& EffectLevel, const TScriptInterface<IAttributeContainerInterface>& Instigator, const TScriptInterface<IAttributeContainerInterface>& Target);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IAttributeContainerInterface> GetTargetAttributeComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStatusEffectStackingType GetStackingEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStackCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumStackSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStatusEffectType GetEffectType() const;
    
};

