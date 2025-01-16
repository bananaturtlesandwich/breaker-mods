#include "AIAdvantagePairMetaData.h"

FAIAdvantagePairMetaData::FAIAdvantagePairMetaData() {
    this->LastTriggerServerTimeSeconds = 0.00f;
    this->NavAreaInteractive = NULL;
    this->DetectionDistanceCm = 0.00f;
    this->ActivateAdvantageDistanceCm = 0.00f;
    this->ExitAdvantageDistanceCm = 0.00f;
    this->bAdvantageRequiresMovement = false;
}

