#include "BreakerAudioGlobals.h"

UBreakerAudioGlobals::UBreakerAudioGlobals() {
    this->BreakerAudioCombatPriorityManagerClass = NULL;
    this->MeshAudioAssociation = NULL;
    this->MaxMultiplePositionsPerComponent = 384;
    this->MultiPositionAudioMeshSocketName = TEXT("AudioMultiPosition");
    this->MultiPositionAmbientAudioPlayerClass = NULL;
    this->BreakerOceanShorePlayerClass = NULL;
    this->DistanceToNearestBiomeRTPC = NULL;
    this->DistanceToNearestMiniBossRTPC = NULL;
    this->DistanceToEliteRTPC = NULL;
}


