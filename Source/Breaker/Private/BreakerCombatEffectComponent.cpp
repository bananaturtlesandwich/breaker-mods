#include "BreakerCombatEffectComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UBreakerCombatEffectComponent::UBreakerCombatEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UBreakerCombatEffectComponent::UpdatedEffect(TSubclassOf<UBreakerCombatEffect> EffectType, AActor* Instigator, FCombatEffectCreationContext NewContext) {
}

void UBreakerCombatEffectComponent::TriggerSpecialOnTarget_Server_Implementation(TSubclassOf<UBreakerCombatEffect> EffectType, AActor* Target) {
}

void UBreakerCombatEffectComponent::TriggerSpecialOnTarget(TSubclassOf<UBreakerCombatEffect> EffectType, AActor* Target) {
}

void UBreakerCombatEffectComponent::TriggerActiveEffectSpecial_Multicast_Implementation(TSubclassOf<UBreakerCombatEffect> EffectType, AActor* Instigator) {
}

void UBreakerCombatEffectComponent::OnRep_ActiveEffects() {
}

bool UBreakerCombatEffectComponent::HasActiveEffect(TSubclassOf<UBreakerCombatEffect> EffectType, AActor* OptionalInstigator) const {
    return false;
}

void UBreakerCombatEffectComponent::ApplyEffectToTarget_Server_Implementation(TSubclassOf<UBreakerCombatEffect> EffectType, AActor* Target, FCombatEffectCreationContext CreationContext) {
}

void UBreakerCombatEffectComponent::ApplyEffectToTarget(TSubclassOf<UBreakerCombatEffect> EffectType, AActor* Target, FCombatEffectCreationContext CreationContext, bool bLocallyPredicted) {
}

void UBreakerCombatEffectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBreakerCombatEffectComponent, ActiveEffects);
}


