#include "AICombatPriorityData.h"

FAICombatPriorityData::FAICombatPriorityData() {
    this->PriorityMinValue = 0.00f;
    this->PriorityMaxValue = 0.00f;
    this->StartingPriorityValue = 0.00f;
    this->PriorityGainedPerSecond = 0.00f;
    this->bPausePriorityCalculations = false;
}

