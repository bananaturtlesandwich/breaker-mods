#include "MiniCutsceneCameraData.h"

UMiniCutsceneCameraData::UMiniCutsceneCameraData() {
    this->bOverrideYawPitchSpeeds = false;
    this->CameraSpeed_Pitch = 100.00f;
    this->CameraSpeed_Yaw = 100.00f;
    this->bUseRotationModifier = false;
    this->bOverrideRotation_Pitch = false;
    this->RotationOverride_Pitch = 0.00f;
    this->bOverrideRotation_Yaw = false;
    this->RotationOverride_Yaw = 0.00f;
}


