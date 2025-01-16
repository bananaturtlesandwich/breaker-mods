#include "PIDController.h"

FPIDController::FPIDController() {
    this->P = 0.00f;
    this->I = 0.00f;
    this->D = 0.00f;
    this->MaxError = 0.00f;
    this->AccumEasing = 0.00f;
}

