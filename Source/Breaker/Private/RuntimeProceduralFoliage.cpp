#include "RuntimeProceduralFoliage.h"

FRuntimeProceduralFoliage::FRuntimeProceduralFoliage() {
    this->Mesh = NULL;
    this->Weight = 0.00f;
    this->Cluster = false;
    this->Avoidance = false;
    this->bIsATree = false;
    this->AvoidanceDistance = 0.00f;
    this->MaxSlope = 0;
    this->SnapToNormal = false;
    this->RandomYaw = false;
    this->PitchVariation = 0.00f;
    this->bDecreaseChanceWithCenterDistance = false;
    this->bAddHeightToOceanDistance = false;
    this->FollowGrassCutoff = false;
    this->Collision = false;
    this->PathMaskThreshold = 0.00f;
    this->bCastShadow = false;
    this->CanCharacterStepUpOn = ECB_No;
}

