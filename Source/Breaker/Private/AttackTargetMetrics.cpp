#include "AttackTargetMetrics.h"

FAttackTargetMetrics::FAttackTargetMetrics() {
    this->Target = NULL;
    this->bCameraVisible = false;
    this->CameraScore = 0.00f;
    this->bCameraInRange = false;
    this->DistanceFromCamera = 0.00f;
    this->StickScore = 0.00f;
    this->bStickInRange = false;
    this->bInRange = false;
    this->bOffScreen = false;
}

