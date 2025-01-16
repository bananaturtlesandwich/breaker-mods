#include "HitScanVfxInfo.h"

FHitScanVfxInfo::FHitScanVfxInfo() {
    this->DamageDirectionCoordinateSpace = EDamageImpulseCoordinateSpace::BoneLocal;
    this->DamageDirectionMode = EDamageDirectionMode::UseImpulseDirection;
    this->PostProcessMode = EDamageFxPostProcessMode::None;
    this->FxCoordinateSpace = EDamageImpulseCoordinateSpace::BoneLocal;
    this->VfxLocationMode = EDamageFxLocationMode::WeaponIntersection;
    this->bIsDirectionBasedOnSocketVelocity = false;
    this->DistanceAlongBasis = 0.00f;
    this->TimeOffsetForPreSnapshot = 0.00f;
    this->TimeOffsetForPostSnapshot = 0.00f;
}

