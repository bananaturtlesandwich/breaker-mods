#include "WarningRing.h"
#include "ProceduralMeshComponent.h"

AWarningRing::AWarningRing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProcMesh"));
    this->ProcMesh = (UProceduralMeshComponent*)RootComponent;
    this->Material = NULL;
    this->Radius = 100.00f;
    this->Thickness = 30.00f;
    this->NumSegments = 48;
}


