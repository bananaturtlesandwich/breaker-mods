#include "AimingCameraData.h"

UAimingCameraData::UAimingCameraData() {
    this->CameraSpeed_Pitch = 100.00f;
    this->CameraSpeed_Yaw = 100.00f;
    this->MaxPullDegrees = 20.00f;
    this->MaxDownDegreesAtStart = 20.00f;
    this->TargetDegreesAtStart = 5.00f;
    this->AutoTiltUpGroundDistance = 2000.00f;
    this->TiltCameraOffset = 150.00f;
    this->HintCutoffDistance = 10000.00f;
    this->bActivateSlowdown = true;
    this->SlowdownDampSeconds = 0.03f;
    this->bActivateSuckIn = true;
    this->SuckInStrength = 0.60f;
    this->SuckInErrorTolerance = 5.00f;
    this->SuckInMoveInputMultiplier = 1.00f;
    this->SuckInAimInputMultiplier = 1.00f;
}


