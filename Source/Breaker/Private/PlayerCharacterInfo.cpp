#include "PlayerCharacterInfo.h"

UPlayerCharacterInfo::UPlayerCharacterInfo() {
    this->Icon = NULL;
    this->ClassSpawnability = EEquipmentSpawnability::None;
    this->Mesh = NULL;
    this->CosmeticMesh = NULL;
    this->AnimBlueprint = NULL;
    this->CosmeticAnimBlueprint = NULL;
    this->WeaponStanceLinkingDataTable = NULL;
    this->MoveSpeedModifier = 1.00f;
    this->DifficultyRating = 1;
    this->CameraCollisionDistanceModifier = 30.00f;
}


