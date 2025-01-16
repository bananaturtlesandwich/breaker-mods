#include "MovementSwim.h"

UMovementSwim::UMovementSwim(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeightOfWaterToEnter = 140.00f;
    this->HeightOfWaterToExit = 120.00f;
    this->FloatHeight = 120.00f;
    this->SwimSpeed = 300.00f;
    this->Drag = 400.00f;
    this->VerticalInterpAccelerationCoeff = 1.20f;
    this->VerticalSpeedCorrectionCoeffection = 0.65f;
    this->TimeBeforeDrowning = 4.00f;
    this->AnimDrowning = NULL;
    this->TurnRate = 10.00f;
    this->bTouchingWater = false;
}

float UMovementSwim::GetTimeToDrownPercentage() const {
    return 0.0f;
}


