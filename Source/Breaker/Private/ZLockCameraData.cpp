#include "ZLockCameraData.h"

UZLockCameraData::UZLockCameraData() {
    this->StickStrengthForTargetChange = 0.75f;
    this->MaxHorizontalFraming = 0.50f;
    this->ScreenWidthMultiplier = 0.10f;
    this->ScreenHeightMultiplier = 0.10f;
    this->bUseZLockCloseRangeModifiers = true;
    this->Distance_CloseRange2D = 1000.00f;
    this->FramingDampSeconds = 0.50f;
    this->RotationDampSeconds = 0.10f;
    this->bZLockV2 = false;
}


