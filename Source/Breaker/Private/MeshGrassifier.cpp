#include "MeshGrassifier.h"

UMeshGrassifier::UMeshGrassifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrassSpawnCutoff = 0.00f;
    this->BaseFISMCount = 0;
    this->AvoidedFISMCount = 0;
    this->NoiseGeneratorRef = NULL;
    this->bCanAutoComplete = false;
}

void UMeshGrassifier::UpdateBaseGrassCullDistance(float GrassCullingScale) {
}

void UMeshGrassifier::SpawnGrass() {
}

void UMeshGrassifier::PlaceAndSpawnGrass() {
}

void UMeshGrassifier::GrassInit(ADecker* DeckerRef_) {
}

void UMeshGrassifier::Grassify() {
}


