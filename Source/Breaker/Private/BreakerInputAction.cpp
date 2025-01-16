#include "BreakerInputAction.h"

FBreakerInputAction::FBreakerInputAction() {
    this->ActionRoute = ECombatActionRoute::None;
    this->bAlwaysBindAction = false;
    this->bCanBeRebound = false;
    this->bCanGamepadBeRebound = false;
}

