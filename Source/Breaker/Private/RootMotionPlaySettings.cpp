#include "RootMotionPlaySettings.h"

FRootMotionPlaySettings::FRootMotionPlaySettings() {
    this->CrossFade = 0.00f;
    this->DistanceMultiplier = 0.00f;
    this->PlayRate = 0.00f;
    this->bCanPlayOnClient = 0.00f;
    this->Tag = EMovementModeTransitionTag::None;
}

