#include "BreakerPangeaQueryResult.h"

FBreakerPangeaQueryResult::FBreakerPangeaQueryResult() {
    this->BiomeIdx = 0;
    this->Zone = 0;
    this->GroundSlope = 0.00f;
    this->SignedDistanceToShoreline = 0.00f;
    this->ShorelineSafeSpotSlope = 0.00f;
    this->bSubmergedInWater = false;
    this->bInNullWater = false;
}

