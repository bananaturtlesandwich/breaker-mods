#include "PointOfInterestData.h"

FPointOfInterestData::FPointOfInterestData() {
    this->DisplayIcon = NULL;
    this->DisplayIconDone = NULL;
    this->IconScale = 0.00f;
    this->DisplayZOrder = 0;
    this->bRestrictToBiome = false;
    this->bOmitFromCompass = false;
    this->bOmitFromMap = false;
    this->RadarRange = 0.00f;
    this->bClampToMapEdge = false;
    this->VerticalityDistance = 0.00f;
}

