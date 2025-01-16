#include "CharacterMovementParams.h"

FCharacterMovementParams::FCharacterMovementParams() {
    this->WalkSpeed = 0.00f;
    this->JogSpeed = 0.00f;
    this->SprintSpeed = 0.00f;
    this->CreepSpeed = 0.00f;
    this->DownSpeed = 0.00f;
    this->EnvironmentDisplacer = NULL;
    this->AccelTractionSeconds = 0.00f;
    this->DecelTractionSeconds = 0.00f;
    this->SprintTractionSeconds = 0.00f;
    this->SkidTractionSeconds = 0.00f;
    this->AscendGravity = 0.00f;
    this->DescendGravity = 0.00f;
    this->HangGravity = 0.00f;
    this->HangTime = 0.00f;
    this->AirTractionSeconds = 0.00f;
    this->MaxFallSpeed = 0.00f;
}

