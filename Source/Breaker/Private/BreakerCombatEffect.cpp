#include "BreakerCombatEffect.h"

UBreakerCombatEffect::UBreakerCombatEffect() {
    this->MaxStackCount = 1;
    this->LifetimeExpiration = 0.00f;
    this->bIgnoreActorBasedTimeDilation = false;
    this->DistanceExpiration = 0.00f;
    this->bResetLifetimeOnStackChange = false;
    this->OwningActor = NULL;
    this->InstigatingActor = NULL;
    this->bIsServer = false;
    this->bIsOwnerLocalPlayer = false;
    this->bIsInstigatorLocalPlayer = false;
    this->ElapsedTime = 0.00f;
    this->LifetimeRemaining = 0.00f;
    this->StackCount = 0;
    this->bForceExpired = false;
}

bool UBreakerCombatEffect::TriggerSpecialEffect_Implementation() {
    return false;
}

void UBreakerCombatEffect::OnEffectTick_Implementation(float DeltaTime) {
}

void UBreakerCombatEffect::OnEffectStackChanged_Implementation(int32 PreviousCount, int32 NewCount) {
}

void UBreakerCombatEffect::OnEffectDeactivated_Implementation(bool bExpiredNormally) {
}

void UBreakerCombatEffect::OnEffectConfigure_Implementation() {
}

void UBreakerCombatEffect::OnEffectActivated_Implementation() {
}

bool UBreakerCombatEffect::IsExpired() const {
    return false;
}

bool UBreakerCombatEffect::HasEffectExpired_Implementation() const {
    return false;
}

void UBreakerCombatEffect::ForceExpire() {
}


