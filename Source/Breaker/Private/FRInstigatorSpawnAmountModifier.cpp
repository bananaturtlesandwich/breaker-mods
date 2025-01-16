#include "FRInstigatorSpawnAmountModifier.h"

UFRInstigatorSpawnAmountModifier::UFRInstigatorSpawnAmountModifier() {
    this->bStatModsAreMultiplicative = true;
    this->bModifiesSpawnedProperties = false;
    this->bUseLocalPlayerAsInstigator = true;
}

float UFRInstigatorSpawnAmountModifier::ComputeModifier(const FFederalReserveDocketContext& Context) {
    return 0.0f;
}


