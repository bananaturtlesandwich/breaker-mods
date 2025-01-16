#include "DefaultCameraData.h"

UDefaultCameraData::UDefaultCameraData() {
    this->CameraLagSpeed = 0.00f;
    this->bUseSpecialCameraLag_Dash = false;
    this->CameraLagSpeed_Dash = 0.00f;
    this->CameraLagSpeed_DashRevertSeconds = 1.00f;
    this->CameraLagSpeed_DashRevertDelaySeconds = 0.10f;
    this->CameraLagSpeed_DashRevertStrength = 0.80f;
    this->CameraSpeed_Pitch = 100.00f;
    this->CameraSpeed_Yaw = 100.00f;
    this->FramingDampSeconds = 0.50f;
    this->DistanceDampSeconds_ZoomOut = 1.00f;
    this->DistanceDampSeconds_ZoomIn = 0.50f;
    this->Distance_NearbyEnemy = 400.00f;
    this->Distance_NearbyBoss = 400.00f;
    this->Distance_LookingUp = 400.00f;
    this->Distance_LookingDown = 400.00f;
    this->VerticalTrackingDampSeconds_Freefall = 0.25f;
    this->VerticalTrackingDampSeconds_Grounded = 0.05f;
    this->VerticalTrackingLimit_Dashing = 75.00f;
    this->Distance_WallDash = 400.00f;
    this->CameraErrorDrainSeconds = 0.25f;
}


