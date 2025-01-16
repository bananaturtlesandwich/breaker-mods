#include "HyperFab.h"

AHyperFab::AHyperFab(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDebugSettlingTraces = false;
    this->DebugSettlingTraceTime = 20.00f;
    this->TraceStartDistance = 2000.00f;
    this->TraceEndDistance = 2000.00f;
    this->TraceAlongRotatedUpVector = false;
    this->FlipTraceDirection = false;
    this->LogSettling = false;
}

void AHyperFab::SettleHyperFab() {
}

void AHyperFab::ResetHyperFab() {
}

void AHyperFab::GatherResetData() {
}

void AHyperFab::ClearResetData() {
}


