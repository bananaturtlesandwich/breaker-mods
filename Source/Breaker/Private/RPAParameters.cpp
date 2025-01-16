#include "RPAParameters.h"

FRPAParameters::FRPAParameters() {
    this->ServerOnly = false;
    this->bCoreGameplay = false;
    this->bUsesIM = false;
    this->MinTargetInstanceCount = 0;
    this->TargetInstanceCount = 0;
    this->bUseAllClasses = false;
    this->InstanceAsDensity = false;
    this->MinScale = 0.00f;
    this->MaxScale = 0.00f;
    this->MinHeight = 0.00f;
    this->MaxHeight = 0.00f;
    this->MinZOffset = 0.00f;
    this->MaxZOffset = 0.00f;
    this->MinSlope = 0.00f;
    this->MaxSlope = 0.00f;
    this->RandomYaw = false;
    this->RandomTilt = false;
    this->RandomTiltAmount = 0.00f;
    this->YawToTangent = false;
    this->UseOnlyAvoidanceArray = false;
    this->SelfAvoid = false;
    this->UseFlatness = false;
    this->MinFlatAreaSize = 0.00f;
    this->MaxFlatAngle = 0.00f;
    this->IsPathNode = false;
    this->ObjectType = EObjectType::Gameplay;
    this->AlignToSurface = false;
    this->ZOffsetAlignToSurface = false;
    this->TargetPointCount = 0;
    this->MaxAttemptLimit = 0;
    this->UseAllPointsForCandidates = false;
    this->CastShadow = false;
    this->CollisionResponse = ECR_Ignore;
    this->ExperimentalCollision = ECC_WorldStatic;
    this->CustomDepthStencilID = 0;
    this->OmitLandlockedShorelinePoints = false;
    this->bUsePool = false;
    this->bInactive = false;
}

