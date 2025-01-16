#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "AttributeContainerInterface.h"
#include "AttributeDetails.h"
#include "AttributeModifiedEventDelegateDelegate.h"
#include "AttributeModifier.h"
#include "AttributeTransaction.h"
#include "EAttributeType.h"
#include "ENetworkReplicationAuthority.h"
#include "ENetworkReplicationType.h"
#include "AttributeContainerComponent.generated.h"

class UAttributeContext;
class UDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HMMAGIC_API UAttributeContainerComponent : public UActorComponent, public IAttributeContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* AttributeContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=Rep_OnTransactionsChanged, meta=(AllowPrivateAccess=true))
    TArray<FAttributeTransaction> Transactions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UAttributeContext*> AttributeContainer;
    
public:
    UAttributeContainerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnRegisterOnAttributeModified(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void UnRegisterOnAttributeFilled(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void UnRegisterOnAttributeDepleted(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_ResetAttribute(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_RefillAttribute(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_OverrideClientUpdates(bool Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_ModifyAttributeValue(FGameplayTag Tag, float Value, bool OverrideBaseValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_ModifyAttributeRange(FGameplayTag Tag, FFloatRange Value, bool OverrideBaseValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_InitializeDefaults();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ResetAttribute(FGameplayTag Tag);
    
private:
    UFUNCTION(BlueprintCallable)
    void Rep_OnTransactionsChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterOnAttributeModified(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void RegisterOnAttributeFilled(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void RegisterOnAttributeDepleted(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    bool RefillAttribute(FGameplayTag Tag);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MULTICAST_ResetAttribute_Unreliable(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MULTICAST_ResetAttribute_Reliable(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MULTICAST_RefillAttribute_Unreliable(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MULTICAST_RefillAttribute_Reliable(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MULTICAST_ModifyAttributeValue_Unreliable(FGameplayTag Tag, float Value, bool OverrideBaseValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MULTICAST_ModifyAttributeValue_Reliable(FGameplayTag Tag, float Value, bool OverrideBaseValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MULTICAST_ModifyAttributeRange_Unreliable(FGameplayTag Tag, FFloatRange Value, bool OverrideBaseValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MULTICAST_ModifyAttributeRange_Reliable(FGameplayTag Tag, FFloatRange Value, bool OverrideBaseValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MULTICAST_InitializeDefaults();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ModifyAttribute(const FAttributeModifier& Modifier);
    
    UFUNCTION(BlueprintCallable)
    bool InitializeDefaults();
    
    UFUNCTION(BlueprintCallable)
    bool GetValueRange(FGameplayTag Tag, FFloatRange& Result);
    
    UFUNCTION(BlueprintCallable)
    bool GetValue(FGameplayTag Tag, float& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRangeValues(const FFloatRange& Input, float& Min, float& Max);
    
    UFUNCTION(BlueprintCallable)
    float GetAttributeValueRatio(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    bool GetAttributeType(FGameplayTag Tag, EAttributeType& Result);
    
    UFUNCTION(BlueprintCallable)
    bool GetAttributeReplicationDetails(FGameplayTag Tag, ENetworkReplicationAuthority& Authority, ENetworkReplicationType& Type);
    
    UFUNCTION(BlueprintCallable)
    bool GetAttributeDetails(FGameplayTag Tag, FAttributeDetails& Result);
    
    UFUNCTION(BlueprintCallable)
    bool GetAttributeDefaultValueRange(FGameplayTag Tag, FFloatRange& Result);
    
    UFUNCTION(BlueprintCallable)
    bool GetAttributeDefaultValue(FGameplayTag Tag, float& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsAttribute(FGameplayTag Tag);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void CLIENT_ResetAttribute(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void CLIENT_RefillAttribute(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void CLIENT_ModifyAttributeValue(FGameplayTag Tag, float Value, bool OverrideBaseValue);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void CLIENT_ModifyAttributeRange(FGameplayTag Tag, FFloatRange Value, bool OverrideBaseValue);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void CLIENT_InitializeDefaults();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    bool SetValueMax(const FGameplayTag AttributeTag, float NewMax) override PURE_VIRTUAL(SetValueMax, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool SetValue(const FGameplayTag AttributeTag, float NewValue) override PURE_VIRTUAL(SetValue, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool ModifyValue(const FGameplayTag AttributeTag, float Delta) override PURE_VIRTUAL(ModifyValue, return false;);
    
};

