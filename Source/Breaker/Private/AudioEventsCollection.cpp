#include "AudioEventsCollection.h"

FAudioEventsCollection::FAudioEventsCollection() {
    this->OnDamagedSound = NULL;
    this->OnMeleeDamagedSound = NULL;
    this->OnRangedDamagedSound = NULL;
    this->OnDeathSound = NULL;
}

