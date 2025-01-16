#include "HyperFabParameters.h"

FHyperFabParameters::FHyperFabParameters() {
    this->AlignToNormal = false;
    this->AlignToGlobalUpDirection = false;
    this->OrientInstancesToActorDirection = false;
    this->OrientTowardsShore = false;
    this->ShoelineOrientationCutoffDistance = 0.00f;
    this->SnapToPeakHeightInBounds = false;
    this->LetItDangle = false;
    this->RandomYaw = false;
    this->RandomYawSnapIncrement = 0.00f;
    this->OffsetZ = 0.00f;
    this->OffsetAlongNormal = false;
    this->ScaleOffsetByAlignmentDistance = false;
    this->MaxAllowedAlignmentDistance = 0.00f;
    this->MinSlope = 0.00f;
    this->MaxSlope = 0.00f;
    this->MinHeight = 0.00f;
    this->MaxHeight = 0.00f;
}

