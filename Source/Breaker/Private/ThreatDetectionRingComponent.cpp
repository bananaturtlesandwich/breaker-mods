#include "ThreatDetectionRingComponent.h"

UThreatDetectionRingComponent::UThreatDetectionRingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PoolSize = 10;
    this->bUseEdgeArrows = false;
    this->ArrowWidgetClass = NULL;
    this->ArrowMesh = NULL;
}


