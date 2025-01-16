#include "AnimNotifyState_SuppressActionInterrupt.h"

UAnimNotifyState_SuppressActionInterrupt::UAnimNotifyState_SuppressActionInterrupt() {
    this->bDisabled = false;
    this->bSuppressDash = true;
    this->bSuppressAim = true;
    this->bSuppressParry = true;
    this->bSuppressGearSwap = false;
    this->bCanExpand = false;
    this->ParentNotify = NULL;
}


