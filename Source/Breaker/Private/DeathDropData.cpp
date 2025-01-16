#include "DeathDropData.h"

FDeathDropData::FDeathDropData() {
    this->Seed = 0;
    this->BrightBlood = 0;
    this->DroppedInLevel = ELevelState::Uninitialized;
    this->CachedSeed = 0;
}

