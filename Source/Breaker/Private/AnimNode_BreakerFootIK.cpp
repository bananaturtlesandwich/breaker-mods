#include "AnimNode_BreakerFootIK.h"

FAnimNode_BreakerFootIK::FAnimNode_BreakerFootIK() {
    this->MaxOffsetUp = 0.00f;
    this->MaxOffsetDown = 0.00f;
    this->RaycastPadding = 0.00f;
    this->RaycastRadius = 0.00f;
    this->MaxLengthEpsilon = 0.00f;
    this->bUseTrajectoryJointAsFloor = false;
    this->bComplexRaycast = false;
    this->bQueryPhysicsSurface = false;
    this->bQueryFaceIndex = false;
    this->MaxAnkleRotation = 0.00f;
    this->AnkleRotationEasing = 0.00f;
    this->GroundOffsetEasing = 0.00f;
}

