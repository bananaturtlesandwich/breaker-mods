#include "SimpleNetEmulationSettings.h"

FSimpleNetEmulationSettings::FSimpleNetEmulationSettings() {
    this->bEnabled = false;
    this->bApplyLocallyAsConsoleCommands = false;
    this->PktIncomingLagMin = 0;
    this->PktIncomingLagMax = 0;
    this->PktIncomingLoss = 0;
    this->PktLagMin = 0;
    this->PktLagMax = 0;
    this->PktLoss = 0;
}

