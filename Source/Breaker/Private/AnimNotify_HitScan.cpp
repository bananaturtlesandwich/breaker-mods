#include "AnimNotify_HitScan.h"

UAnimNotify_HitScan::UAnimNotify_HitScan() {
    this->ScanShape = EScanShape::Sphere;
    this->CoordinateSpace = EDamageImpulseCoordinateSpace::BoneLocal;
    this->DamageDirectionCoordinateSpace = EDamageImpulseCoordinateSpace::ActorLocal;
    this->ImpulseMultiplier = 1.00f;
    this->DamageSourceType = EDamageSourceType::Melee;
    this->DamageDirectionMode = EDamageDirectionMode::UseImpulseDirection;
    this->DamageMultiplier = 1.00f;
    this->DamageStrength = EDamageStrengthType::Medium;
    this->bFinisher = false;
    this->bDeactivate = false;
    this->bHaltOnHit = false;
    this->UnchargedAmount = 0;
    this->bUseSharedFingerprint = false;
    this->DrawHitScan = false;
    this->ProximityCameraShake = NULL;
    this->Condition = NULL;
    this->bResetCadence = false;
}


