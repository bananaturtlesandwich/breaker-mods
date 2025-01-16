#include "HitScanShapeDefinition.h"

FHitScanShapeDefinition::FHitScanShapeDefinition() {
    this->ScanShape = EScanShape::Sphere;
    this->CoordinateSpace = EDamageImpulseCoordinateSpace::BoneLocal;
}

