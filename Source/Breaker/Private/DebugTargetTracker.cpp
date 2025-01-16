#include "DebugTargetTracker.h"

UDebugTargetTracker::UDebugTargetTracker() {
    this->InspectedActor = NULL;
    this->LocalRole = TEXT("NONE");
    this->InspectionStringIdx = 0;
    this->LastLockedActor = NULL;
}

void UDebugTargetTracker::UpdateTargetLock() {
}

void UDebugTargetTracker::UpdateInspectedActor(AActor* Target) {
}

void UDebugTargetTracker::UpdateActorList() {
}


