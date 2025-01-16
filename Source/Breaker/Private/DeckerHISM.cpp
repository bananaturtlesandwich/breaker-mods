#include "DeckerHISM.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

ADeckerHISM::ADeckerHISM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HierarchicalInstancedStaticMesh"));
    this->MyHISM = (UHierarchicalInstancedStaticMeshComponent*)RootComponent;
}


