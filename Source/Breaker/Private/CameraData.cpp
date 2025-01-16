#include "CameraData.h"

UCameraData::UCameraData() {
    this->BlendSeconds_In = 0.10f;
    this->BlendSeconds_Out = 0.10f;
    this->Distance_Default = 400.00f;
    this->VerticalFieldOfView = 60.00f;
    this->VerticalTrackingLimit_Normal = 150.00f;
    this->bUseConstantCameraLag = false;
    this->bAcceptInputRotation = true;
}


