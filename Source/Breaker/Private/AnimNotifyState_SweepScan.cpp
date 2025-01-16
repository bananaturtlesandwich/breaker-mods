#include "AnimNotifyState_SweepScan.h"

UAnimNotifyState_SweepScan::UAnimNotifyState_SweepScan() {
    this->bAutoApplyShapeTemplate = false;
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
    this->AnimHitInterrupt = NULL;
    this->DrawHitScan = false;
    this->UnchargedAmount = 0;
    this->bUseSharedFingerprint = false;
    this->ResetFingerprintInterval = -1.00f;
    this->Condition = NULL;
    this->bResetCadence = false;
}


