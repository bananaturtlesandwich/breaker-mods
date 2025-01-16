#include "BreakerAmpActor.h"

ABreakerAmpActor::ABreakerAmpActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


ABreakerPawn* ABreakerAmpActor::GetPawnInstigator() const {
    return NULL;
}

float ABreakerAmpActor::GetDistanceFromPawnInstigator() const {
    return 0.0f;
}

ABreakerWeaponProp* ABreakerAmpActor::GetAmpInstigator() const {
    return NULL;
}


