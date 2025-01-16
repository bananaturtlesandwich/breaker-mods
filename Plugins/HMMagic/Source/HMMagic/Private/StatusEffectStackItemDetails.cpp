#include "StatusEffectStackItemDetails.h"

FStatusEffectStackItemDetails::FStatusEffectStackItemDetails() {
    this->EffectLevel = 0;
    this->EffectDuration = 0.00f;
    this->TriggerDuration = 0.00f;
    this->StackLimitType = EStatusEffectStackLimitType::Limited;
    this->MaximumStackSize = 0;
    this->DurationPercentage = 0.00f;
    this->ElapsedEffectDuration = 0.00f;
    this->ElapsedTriggerDuration = 0.00f;
    this->LoadedIconOverride = NULL;
}

