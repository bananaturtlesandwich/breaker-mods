#include "FindLocationParams.h"

FFindLocationParams::FFindLocationParams() {
    this->ContextActor = NULL;
    this->bPickLocationInFrontOfContextActor = false;
    this->SearchRadius = 0.00f;
    this->bSnapToGround = false;
    this->SnapZStart = 0.00f;
    this->SnapZEnd = 0.00f;
    this->bMustBeVisible = false;
    this->Viewer = NULL;
    this->ViewerHeight = 0.00f;
    this->bMustBeNavigable = false;
    this->bAvoidWater = false;
    this->SuggestedMaxSlopeAngle = 0.00f;
}

