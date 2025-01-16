#include "HitscanGunShotPacket.h"

FHitscanGunShotPacket::FHitscanGunShotPacket() {
    this->Seed = 0;
    this->Accuracy = 0.00f;
    this->bSpreadShot = false;
    this->bFinalShotInVolley = false;
    this->bUseMultiTrace = false;
    this->HomingTarget = NULL;
    this->NumberOfChains = 0;
    this->OptionalProjectile = NULL;
}

