#include "SweepScanShapeTemplate.h"

FSweepScanShapeTemplate::FSweepScanShapeTemplate() {
    this->bDamageDetailsFromGear = false;
    this->DamageStrength = EDamageStrengthType::None;
    this->DamageSource = EDamageSourceType::Melee;
    this->MaxMagnetDistance = 0.00f;
    this->IdealDistance = 0.00f;
    this->LoseTargetDistance = 0.00f;
}

