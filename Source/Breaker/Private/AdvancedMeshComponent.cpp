#include "AdvancedMeshComponent.h"

UAdvancedMeshComponent::UAdvancedMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseCollision = false;
    this->LODChoice = 0;
    this->bForceLOD = false;
    this->bDebugOn = false;
    this->DebugDisplayTime = 100.00f;
    this->MeshRef = NULL;
    this->World = NULL;
    this->NumTris = 0;
    this->VertexBufferStride = 0;
}

void UAdvancedMeshComponent::RemoveEverything() {
}

int32 UAdvancedMeshComponent::GetNumTriangles() {
    return 0;
}

int32 UAdvancedMeshComponent::GetIsInside2D(FMeshTriangle Tri, FVector Location) {
    return 0;
}

int32 UAdvancedMeshComponent::GetIsInside(FMeshTriangle Tri, FVector Location) {
    return 0;
}

void UAdvancedMeshComponent::DrawDebugStuff(FMeshTriangle MeshTri, FColor DebugColor, float DisplayTime) {
}

void UAdvancedMeshComponent::DrawDebugOnce() {
}

bool UAdvancedMeshComponent::AdvancedMeshInit() {
    return false;
}


