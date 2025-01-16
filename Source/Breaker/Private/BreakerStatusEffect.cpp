#include "BreakerStatusEffect.h"

ABreakerStatusEffect::ABreakerStatusEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->PrimaryDamageDetail = EDamageDetail::StatusEffect;
    this->EffectIcon = NULL;
    this->Duration = 1.00f;
    this->bKeepEffectAliveUntilDeadlineMet = false;
}

void ABreakerStatusEffect::ResetDeadline() {
}







bool ABreakerStatusEffect::HasTimedOut() const {
    return false;
}

bool ABreakerStatusEffect::HasDuration() const {
    return false;
}

ACMCharBase* ABreakerStatusEffect::GetCharacterPawn() const {
    return NULL;
}

ABreakerPawn* ABreakerStatusEffect::GetBreakerPawn() const {
    return NULL;
}

void ABreakerStatusEffect::ForceExpire() {
}


