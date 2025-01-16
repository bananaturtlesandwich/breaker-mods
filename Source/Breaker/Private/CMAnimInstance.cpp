#include "CMAnimInstance.h"

UCMAnimInstance::UCMAnimInstance() {
    this->ConfigWalkSpeed = 300.00f;
    this->ConfigJogSpeed = 540.00f;
    this->ConfigSprintSpeed = 900.00f;
    this->bCharIsGrounded = true;
    this->bCharIsJumping = false;
    this->bCharIsDescending = false;
    this->HorizontalSpeed = 0.00f;
    this->bCharIsMoving = false;
    this->PlayRateWalk = 1.00f;
    this->PlayRateJog = 1.00f;
    this->PlayRateSprint = 1.00f;
    this->LookAtYaw = 0.00f;
    this->LookAtPitch = 0.00f;
    this->AngularVelocity = 0.00f;
    this->AimYaw = 0.00f;
    this->AimPitch = 0.00f;
    this->bTransitionIdleToWalk = false;
    this->bTransitionJogToWalk = false;
    this->bTransitionJogToSprint = false;
    this->bTransitionSprintToJog = false;
    this->bTransitionWalkToJog = false;
    this->bTransitionWalkToIdle = false;
    this->bTransitionNotGroundedNotJumping = false;
    this->bTransitionGroundedAndNotMoving = false;
    this->bTriggerFlinch = false;
}


