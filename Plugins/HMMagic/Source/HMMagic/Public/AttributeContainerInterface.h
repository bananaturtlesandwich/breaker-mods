#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "AttributeDetails.h"
#include "AttributeModifiedEventDelegateDelegate.h"
#include "AttributeModifier.h"
#include "EAttributeType.h"
#include "ENetworkReplicationAuthority.h"
#include "ENetworkReplicationType.h"
#include "AttributeContainerInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class HMMAGIC_API UAttributeContainerInterface : public UInterface {
    GENERATED_BODY()
};

class HMMAGIC_API IAttributeContainerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UnRegisterOnAttributeModified(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback) PURE_VIRTUAL(UnRegisterOnAttributeModified,);
    
    UFUNCTION(BlueprintCallable)
    virtual void UnRegisterOnAttributeFilled(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback) PURE_VIRTUAL(UnRegisterOnAttributeFilled,);
    
    UFUNCTION(BlueprintCallable)
    virtual void UnRegisterOnAttributeDepleted(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback) PURE_VIRTUAL(UnRegisterOnAttributeDepleted,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool SetValueMax(const FGameplayTag AttributeTag, float NewMax) PURE_VIRTUAL(SetValueMax, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool SetValue(const FGameplayTag AttributeTag, float NewValue) PURE_VIRTUAL(SetValue, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool ResetAttribute(FGameplayTag Tag) PURE_VIRTUAL(ResetAttribute, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void RegisterOnAttributeModified(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback) PURE_VIRTUAL(RegisterOnAttributeModified,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RegisterOnAttributeFilled(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback) PURE_VIRTUAL(RegisterOnAttributeFilled,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RegisterOnAttributeDepleted(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback) PURE_VIRTUAL(RegisterOnAttributeDepleted,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool RefillAttribute(FGameplayTag Tag) PURE_VIRTUAL(RefillAttribute, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool ModifyValue(const FGameplayTag AttributeTag, float Delta) PURE_VIRTUAL(ModifyValue, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool ModifyAttribute(const FAttributeModifier& Modifier) PURE_VIRTUAL(ModifyAttribute, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool InitializeDefaults() PURE_VIRTUAL(InitializeDefaults, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetValueRange(FGameplayTag Tag, FFloatRange& Result) PURE_VIRTUAL(GetValueRange, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetValue(FGameplayTag Tag, float& Result) PURE_VIRTUAL(GetValue, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetAttributeValueRatio(FGameplayTag Tag) PURE_VIRTUAL(GetAttributeValueRatio, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAttributeType(FGameplayTag Tag, EAttributeType& Result) PURE_VIRTUAL(GetAttributeType, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAttributeReplicationDetails(FGameplayTag Tag, ENetworkReplicationAuthority& Authority, ENetworkReplicationType& Type) PURE_VIRTUAL(GetAttributeReplicationDetails, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAttributeDetails(FGameplayTag Tag, FAttributeDetails& Result) PURE_VIRTUAL(GetAttributeDetails, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAttributeDefaultValueRange(FGameplayTag Tag, FFloatRange& Result) PURE_VIRTUAL(GetAttributeDefaultValueRange, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAttributeDefaultValue(FGameplayTag Tag, float& Result) PURE_VIRTUAL(GetAttributeDefaultValue, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool ContainsAttribute(FGameplayTag Tag) PURE_VIRTUAL(ContainsAttribute, return false;);
    
};

