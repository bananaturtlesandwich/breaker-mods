#include "AimArcConfig.h"

FAimArcConfig::FAimArcConfig() {
    this->bUsesAimArc = false;
    this->bDrawAimArc = false;
    this->bDrawAimThreatArea = false;
    this->bDrawAimTargetLine = false;
    this->ProjectileRadius = 0.00f;
    this->GravityScale = 0.00f;
    this->bPredictBounces = false;
    this->MaxBouncesToPredict = 0;
    this->ExpectedProjectileLifetime = 0.00f;
    this->PitchOffset = 0.00f;
    this->YawOffset = 0.00f;
    this->PitchLimit = 0.00f;
    this->LaunchSpeed = 0.00f;
}

