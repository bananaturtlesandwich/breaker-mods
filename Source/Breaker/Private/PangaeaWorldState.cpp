#include "PangaeaWorldState.h"

FPangaeaWorldState::FPangaeaWorldState() {
    this->Seed = 0;
    this->Variant = 0;
    this->NumTimesInWorld = 0;
    this->NumberOfCompletedMissions = 0;
    this->CycleStatus = ECycleStatus::None;
    this->CycleRuns = 0;
    this->CycleLives = 0;
    this->CycleHealthKits = 0;
    this->WorldXP = 0;
    this->WorldRank = 0;
    this->DangerMeter = 0;
    this->DangerDifficulty = 0;
    this->CurrentVersion = 0;
}

