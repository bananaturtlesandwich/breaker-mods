#include "AnimNotifyState_HandleTargetMagnetism.h"

UAnimNotifyState_HandleTargetMagnetism::UAnimNotifyState_HandleTargetMagnetism() {
    this->bAutoApplyTemplate = false;
    this->bAllowFirstHitMagnetism = true;
    this->bEffectedByLastPlayerDamage = true;
    this->TargetLockRootMotionModifier = 1.00f;
    this->MaxMagnetDistance = 500.00f;
    this->IdealDistance = 200.00f;
    this->LoseTargetDistance = 300.00f;
    this->FixedInterpolationRate = -1.00f;
    this->bAllowBackwardsCorrection = false;
    this->BackwardCorrectionStrength = 0.30f;
    this->bAllowTargetBackwardsCorrection = false;
    this->ExpectedMovementFromAnimation = 0.00f;
    this->TargetSelectionMethod = EAttackTargetSelectionMethod::CameraOrStickTarget;
    this->bAllowCameraTargets = false;
    this->bSnapRotationOnly = false;
    this->bAllowPitchCorrection = false;
    this->bAllowDownwardZCorrection = false;
    this->bAllowJoystickRotationOverride = true;
    this->bAllowStrongJoystickToIgnoreMagneticTarget = false;
    this->JoystickAngleThresholdForIgnoringMagneticTarget = 60.00f;
}


