#include "InteractableRules.h"

FInteractableRules::FInteractableRules() {
    this->bServerOnly = false;
    this->bCoreGameplay = false;
    this->bExteriors = false;
    this->bInteriors = false;
    this->TargetLocatorType = NULL;
    this->bUseAllClasses = false;
    this->Footprint = 0.00f;
    this->bActive = false;
}

