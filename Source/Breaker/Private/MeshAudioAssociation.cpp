#include "MeshAudioAssociation.h"

FMeshAudioAssociation::FMeshAudioAssociation() {
    this->PositionType = AkMultiPositionType::SingleSource;
    this->AmbientAudio = false;
    this->GridResolution = 0.00f;
}

