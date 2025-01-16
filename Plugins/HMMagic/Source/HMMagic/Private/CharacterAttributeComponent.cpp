#include "CharacterAttributeComponent.h"

UCharacterAttributeComponent::UCharacterAttributeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectMappingContext = NULL;
}

void UCharacterAttributeComponent::SERVER_RemoveStatusEffect_Implementation(FGameplayTag Tag) {
}

void UCharacterAttributeComponent::SERVER_RemoveAllStatusEffects_Implementation() {
}

void UCharacterAttributeComponent::SERVER_ApplyStatusEffect_ToTarget_Implementation(FGameplayTag Tag, EStatusEffectType EffectType, int32 EffectLevel, UAttributeContainerComponent* Target) {
}

void UCharacterAttributeComponent::SERVER_ApplyStatusEffect_Implementation(FGameplayTag Tag, EStatusEffectType EffectType, int32 EffectLevel, UAttributeContainerComponent* Instigator) {
}

bool UCharacterAttributeComponent::RemoveStatusEffect(FGameplayTag Tag) {
    return false;
}

bool UCharacterAttributeComponent::RemoveAllStatusEffects() {
    return false;
}

void UCharacterAttributeComponent::MULTICAST_RemoveStatusEffect_Implementation(FGameplayTag Tag) {
}

void UCharacterAttributeComponent::MULTICAST_RemoveAllStatusEffects_Implementation() {
}

void UCharacterAttributeComponent::MULTICAST_ApplyStatusEffect_Implementation(FGameplayTag Tag, EStatusEffectType EffectType, int32 EffectLevel, UAttributeContainerComponent* Instigator) {
}

bool UCharacterAttributeComponent::HasStatusEffectApplied(FGameplayTag Tag) {
    return false;
}

bool UCharacterAttributeComponent::GetStackCount(FGameplayTag Tag, int32& StackSize) {
    return false;
}

bool UCharacterAttributeComponent::ApplyStatusEffect(FGameplayTag Tag, EStatusEffectType EffectType, int32 EffectLevel, TScriptInterface<IAttributeContainerInterface> Instigator) {
    return false;
}


