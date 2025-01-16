#include "AIAttackPriorityData.h"

FAIAttackPriorityData::FAIAttackPriorityData() {
    this->PriorityGainedOnAttackDenial = 0.00f;
    this->AdditiveDecayDurationAppliedSeconds = 0.00f;
    this->CurrentAdditiveDecayDurationAppliedSeconds = 0.00f;
    this->PriorityDecayAdditivePerSecond = 0.00f;
    this->MultiplicativeDecayDurationAppliedSeconds = 0.00f;
    this->CurrentMultiplicativeDecayDurationAppliedSeconds = 0.00f;
    this->PriorityDecayMultiplicativePerSecond = 0.00f;
    this->LastAttackServerTimeSeconds = 0.00f;
}

