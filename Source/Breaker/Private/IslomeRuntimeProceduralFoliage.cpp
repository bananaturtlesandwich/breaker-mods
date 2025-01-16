#include "IslomeRuntimeProceduralFoliage.h"

FIslomeRuntimeProceduralFoliage::FIslomeRuntimeProceduralFoliage() {
    this->RuntimeFoliageInfo = NULL;
    this->Density = 0;
    this->ClusterProbability = 0.00f;
    this->AvoidableProbability = 0.00f;
    this->AvoidableAreaCoefficient = 0.00f;
    this->AvoidableAreaExponent = 0.00f;
    this->NoiseCutoff = 0.00f;
    this->ZoneRange = 0.00f;
    this->ZoneRangeExponent = 0.00f;
    this->BoundaryFeathering = 0.00f;
    this->BoundaryScaling = 0.00f;
}

