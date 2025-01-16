#include "NoisePingComponent.h"
#include "Perception/AISense_Hearing.h"

UNoisePingComponent::UNoisePingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RegisterAsSourceForSenses.AddDefaulted(1);
    this->NoisePingRadiusCm = 8000.00f;
    this->NoisePingLoudnessCoefficientCm = 1.00f;
    this->NoisePingIntervalSeconds = 2.00f;
    this->InitialPingCooldownSeconds = 1.00f;
    this->LastPingSeconds = 0.00f;
    this->PingPerceptionSenseCategory = UAISense_Hearing::StaticClass();
    this->bDisableAllPings = false;
}

bool UNoisePingComponent::ReportNoisePing() {
    return false;
}


