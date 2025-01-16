#include "BreakerMusicPackage.h"

UBreakerMusicPackage::UBreakerMusicPackage() {
    this->bIsBiomeMusicPackage = false;
    this->bSpectateMusicEnabled = false;
    this->bStopPreviousMusicPackage = true;
    this->bRandomizeLongFormLayerDelay = false;
    this->LongFormLayerDelayInSeconds = 0.00f;
    this->LongFormLayerDelayMinOffsetInSeconds = 0.00f;
    this->LongFormLayerDelayMaxOffsetInSeconds = 0.00f;
    this->MinDistanceToNearestBiomeForLongFormMusic = 4500.00f;
    this->MinDistanceToEncounterForLongFormMusic = 3000.00f;
}


