#include "EquipmentDetails.h"

FEquipmentDetails::FEquipmentDetails() {
    this->LevelXP = NULL;
    this->LevelXPMultiplier = 0.00f;
    this->bIsDefaultEquipment = false;
    this->Spawnability = EEquipmentSpawnability::None;
    this->ExecutionDamageBaseMultiplier = 0.00f;
}

