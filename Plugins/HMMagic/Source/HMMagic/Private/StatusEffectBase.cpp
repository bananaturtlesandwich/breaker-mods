#include "StatusEffectBase.h"

UStatusEffectBase::UStatusEffectBase() {
}








TScriptInterface<IAttributeContainerInterface> UStatusEffectBase::GetTargetAttributeComponent() {
    return NULL;
}

FGameplayTag UStatusEffectBase::GetTag() const {
    return FGameplayTag{};
}

EStatusEffectStackingType UStatusEffectBase::GetStackingEffect() const {
    return EStatusEffectStackingType::Additive;
}

int32 UStatusEffectBase::GetStackCount() const {
    return 0;
}

int32 UStatusEffectBase::GetMaximumStackSize() const {
    return 0;
}

EStatusEffectType UStatusEffectBase::GetEffectType() const {
    return EStatusEffectType::Indefinite;
}


