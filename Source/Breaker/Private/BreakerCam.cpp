#include "BreakerCam.h"
#include "Templates/SubclassOf.h"

ABreakerCam::ABreakerCam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->ZoomOutSpeed = 0.10f;
    this->TestFlySpeed = 6000.00f;
    this->TestFlySpeedFast = 30000.00f;
    this->TestFlySpeedSlow = 500.00f;
    this->TestPitchSpeed = 90.00f;
    this->TestYawSpeed = 90.00f;
    this->TestFOV = 90.00f;
    this->TestTeleportOffset = 100.00f;
    this->MaxPitch = 85.00f;
    this->CollisionSize = 25.00f;
    this->BaseShakeDuration = 1.00f;
    this->BaseShakeAmplitude = 0.10f;
    this->BaseShakeCurve = NULL;
    this->MinDelayBetweenCameraShakes = 0.20f;
    this->DebugMenuWidget = NULL;
    this->BlendCurve = NULL;
}

void ABreakerCam::SetTestCameraEnabled(bool IsEnabled) {
}

UCameraShakeBase* ABreakerCam::PlayBreakerCameraShakeWithParams(const FGameplayTag& CameraShakeID, const FBreakerCameraShakeParams& InParams, bool bForcePlay) {
    return NULL;
}

UCameraShakeBase* ABreakerCam::PlayBreakerCameraShakeAssetWithParams(TSubclassOf<UCameraShakeBase> InCameraShakeClass, const FBreakerCameraShakeParams& InParams, bool bForcePlay) {
    return NULL;
}

UCameraShakeBase* ABreakerCam::PlayBreakerCameraShake(const FGameplayTag& CameraShakeID, bool bForcePlay) {
    return NULL;
}

bool ABreakerCam::IsTestCameraEnabled() const {
    return false;
}

bool ABreakerCam::IsBlendingOrbit() const {
    return false;
}


