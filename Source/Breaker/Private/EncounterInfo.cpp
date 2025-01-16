#include "EncounterInfo.h"

FEncounterInfo::FEncounterInfo() {
    this->EncounterType = EEncounterType::None;
    this->EncounterState = EEncounterState::NotStarted;
    this->EncounterEnemy = NULL;
    this->Unregistered = false;
}

