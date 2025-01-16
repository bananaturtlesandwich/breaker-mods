#include "BreakerTriggeredEncounter.h"

ABreakerTriggeredEncounter::ABreakerTriggeredEncounter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxBarrierRadius = 10000.00f;
    this->IncrementSize = 500.00f;
}

void ABreakerTriggeredEncounter::SpawnBarriersSimple(TArray<FVector>& BarrierSpawnPoints) const {
}

bool ABreakerTriggeredEncounter::IsPointWithinBarrierSimple(FVector Point, float Padding) const {
    return false;
}



