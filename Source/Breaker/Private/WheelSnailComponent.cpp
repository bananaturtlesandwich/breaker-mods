#include "WheelSnailComponent.h"

UWheelSnailComponent::UWheelSnailComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSlopeAngle = 45.00f;
    this->MaxSlopeRise = 100.00f;
    this->CollisionRadius = 50.00f;
    this->CollisionSearchHeight = 200.00f;
    this->CollisionBaseHeight = 100.00f;
    this->NumGroundChecks = 3;
    this->SlopeRise = 0.00f;
    this->bDebugDraw = false;
}


