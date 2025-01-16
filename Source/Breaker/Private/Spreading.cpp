#include "Spreading.h"

FSpreading::FSpreading() {
    this->SpreadSpawn = false;
    this->SpreadDistance = 0.00f;
    this->SpreadHeightTolerance = 0.00f;
    this->MaxNumber = 0;
    this->SpreadSpawnType = ESpreadSpawnType::SST_Grid;
}

