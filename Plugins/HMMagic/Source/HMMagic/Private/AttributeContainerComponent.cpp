#include "AttributeContainerComponent.h"
#include "Net/UnrealNetwork.h"

UAttributeContainerComponent::UAttributeContainerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttributeContext = NULL;
}

void UAttributeContainerComponent::UnRegisterOnAttributeModified(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback) {
}

void UAttributeContainerComponent::UnRegisterOnAttributeFilled(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback) {
}

void UAttributeContainerComponent::UnRegisterOnAttributeDepleted(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback) {
}

void UAttributeContainerComponent::SERVER_ResetAttribute_Implementation(FGameplayTag Tag) {
}

void UAttributeContainerComponent::SERVER_RefillAttribute_Implementation(FGameplayTag Tag) {
}

void UAttributeContainerComponent::SERVER_OverrideClientUpdates_Implementation(bool Value) {
}

void UAttributeContainerComponent::SERVER_ModifyAttributeValue_Implementation(FGameplayTag Tag, float Value, bool OverrideBaseValue) {
}

void UAttributeContainerComponent::SERVER_ModifyAttributeRange_Implementation(FGameplayTag Tag, FFloatRange Value, bool OverrideBaseValue) {
}

void UAttributeContainerComponent::SERVER_InitializeDefaults_Implementation() {
}

bool UAttributeContainerComponent::ResetAttribute(FGameplayTag Tag) {
    return false;
}

void UAttributeContainerComponent::Rep_OnTransactionsChanged() {
}

void UAttributeContainerComponent::RegisterOnAttributeModified(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback) {
}

void UAttributeContainerComponent::RegisterOnAttributeFilled(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback) {
}

void UAttributeContainerComponent::RegisterOnAttributeDepleted(FGameplayTag AttributeTag, FAttributeModifiedEventDelegate Callback) {
}

bool UAttributeContainerComponent::RefillAttribute(FGameplayTag Tag) {
    return false;
}

void UAttributeContainerComponent::MULTICAST_ResetAttribute_Unreliable_Implementation(FGameplayTag Tag) {
}

void UAttributeContainerComponent::MULTICAST_ResetAttribute_Reliable_Implementation(FGameplayTag Tag) {
}

void UAttributeContainerComponent::MULTICAST_RefillAttribute_Unreliable_Implementation(FGameplayTag Tag) {
}

void UAttributeContainerComponent::MULTICAST_RefillAttribute_Reliable_Implementation(FGameplayTag Tag) {
}

void UAttributeContainerComponent::MULTICAST_ModifyAttributeValue_Unreliable_Implementation(FGameplayTag Tag, float Value, bool OverrideBaseValue) {
}

void UAttributeContainerComponent::MULTICAST_ModifyAttributeValue_Reliable_Implementation(FGameplayTag Tag, float Value, bool OverrideBaseValue) {
}

void UAttributeContainerComponent::MULTICAST_ModifyAttributeRange_Unreliable_Implementation(FGameplayTag Tag, FFloatRange Value, bool OverrideBaseValue) {
}

void UAttributeContainerComponent::MULTICAST_ModifyAttributeRange_Reliable_Implementation(FGameplayTag Tag, FFloatRange Value, bool OverrideBaseValue) {
}

void UAttributeContainerComponent::MULTICAST_InitializeDefaults_Implementation() {
}

bool UAttributeContainerComponent::ModifyAttribute(const FAttributeModifier& Modifier) {
    return false;
}

bool UAttributeContainerComponent::InitializeDefaults() {
    return false;
}

bool UAttributeContainerComponent::GetValueRange(FGameplayTag Tag, FFloatRange& Result) {
    return false;
}

bool UAttributeContainerComponent::GetValue(FGameplayTag Tag, float& Result) {
    return false;
}

void UAttributeContainerComponent::GetRangeValues(const FFloatRange& Input, float& Min, float& Max) {
}

float UAttributeContainerComponent::GetAttributeValueRatio(FGameplayTag Tag) {
    return 0.0f;
}

bool UAttributeContainerComponent::GetAttributeType(FGameplayTag Tag, EAttributeType& Result) {
    return false;
}

bool UAttributeContainerComponent::GetAttributeReplicationDetails(FGameplayTag Tag, ENetworkReplicationAuthority& Authority, ENetworkReplicationType& Type) {
    return false;
}

bool UAttributeContainerComponent::GetAttributeDetails(FGameplayTag Tag, FAttributeDetails& Result) {
    return false;
}

bool UAttributeContainerComponent::GetAttributeDefaultValueRange(FGameplayTag Tag, FFloatRange& Result) {
    return false;
}

bool UAttributeContainerComponent::GetAttributeDefaultValue(FGameplayTag Tag, float& Result) {
    return false;
}

bool UAttributeContainerComponent::ContainsAttribute(FGameplayTag Tag) {
    return false;
}

void UAttributeContainerComponent::CLIENT_ResetAttribute_Implementation(FGameplayTag Tag) {
}

void UAttributeContainerComponent::CLIENT_RefillAttribute_Implementation(FGameplayTag Tag) {
}

void UAttributeContainerComponent::CLIENT_ModifyAttributeValue_Implementation(FGameplayTag Tag, float Value, bool OverrideBaseValue) {
}

void UAttributeContainerComponent::CLIENT_ModifyAttributeRange_Implementation(FGameplayTag Tag, FFloatRange Value, bool OverrideBaseValue) {
}

void UAttributeContainerComponent::CLIENT_InitializeDefaults_Implementation() {
}

void UAttributeContainerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttributeContainerComponent, Transactions);
}


