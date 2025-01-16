#include "ParryEventPayload.h"

FParryEventPayload::FParryEventPayload() {
    this->Target = NULL;
    this->Attacker = NULL;
    this->bProjectile = false;
    this->bPerfect = false;
}

