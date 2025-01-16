#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "EStatusEffectType.h"
#include "StatusEffectContainerInterface.generated.h"

class IAttributeContainerInterface;
class UAttributeContainerInterface;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class HMMAGIC_API UStatusEffectContainerInterface : public UInterface {
    GENERATED_BODY()
};

class HMMAGIC_API IStatusEffectContainerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool RemoveStatusEffect(FGameplayTag Tag) PURE_VIRTUAL(RemoveStatusEffect, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool RemoveAllStatusEffects() PURE_VIRTUAL(RemoveAllStatusEffects, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasStatusEffectApplied(FGameplayTag Tag) PURE_VIRTUAL(HasStatusEffectApplied, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetStackCount(FGameplayTag Tag, int32& StackSize) PURE_VIRTUAL(GetStackCount, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool ApplyStatusEffect(FGameplayTag Tag, EStatusEffectType EffectType, int32 EffectLevel, TScriptInterface<IAttributeContainerInterface> Instigator) PURE_VIRTUAL(ApplyStatusEffect, return false;);
    
};

