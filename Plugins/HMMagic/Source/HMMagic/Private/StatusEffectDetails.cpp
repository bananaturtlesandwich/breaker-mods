#include "StatusEffectDetails.h"

FStatusEffectDetails::FStatusEffectDetails() {
    this->MaximumStackSize = 0;
    this->StackingEffect = EStatusEffectStackingType::Additive;
    this->TriggerDuration = 0.00f;
    this->EffectDuration = 0.00f;
}

